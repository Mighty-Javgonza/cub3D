NAME = graphic

SOURCE_PREF =source/
BUILD_PREF =build/
TEST_PREF = tests/

SOURCE_DIRS = $(shell find source -type d)
SOURCE_FILES = $(foreach dir, $(SOURCE_DIRS), $(wildcard $(dir)/*.c))

BUILD_DIRS= $(subst $(SOURCE_PREF), $(BUILD_PREF), $(SOURCE_DIRS))
OBJ_FILES = $(subst $(SOURCE_PREF), $(BUILD_PREF), $(SOURCE_FILES:.c=.o))

TEST_DIRS = $(subst $(SOURCE_PREF), $(TEST_PREF), $(SOURCE_DIRS))
TEST_FILES = $(foreach dir, $(TEST_DIRS), $(wildcard $(dir)/*.c))
TEST_OBJS = $(TEST_FILES:.c=.test)

MAIN=main.c
SRCS = $(SRS) $(MAIN)

PROJECT_ADVISOR = "Bonsai	|" 
ECHO = echo $(PROJECT_ADVISOR)
PWD = $(shell pwd)

MLX_ARGS = -framework OpenGL -framework AppKit -pthread -fsanitize=address -L minilibx_mms_20200219 -lmlx
MLX_INCLUDE = -I minilibx_mms_20200219

LIBFT = libft/libftprintf.a

CC = gcc -g
COMP_FLAGS = -Wall -Wextra -Werror
COMPILER = $(CC) $(COMP_FLAGS)

.PHONY: clean fclean re dirs cleantests test_folder retest_folder update_tags

$(BUILD_PREF)%.o:$(SOURCE_PREF)%.c
	@$(ECHO) building $@
	@$(COMPILER) -c -o $@ $< $(MLX_INCLUDE)

$(TEST_PREF)%.test:$(TEST_PREF)%.c
	@$(ECHO) building $<
	@$(COMPILER) -o $@ $< $(OBJ_FILES) $(LIBFT) $(MLX_ARGS) -headerpad_max_install_names
	@install_name_tool -add_rpath $(PWD)/minilibx_mms_20200219 $@
	@install_name_tool -change libmlx.dylib @rpath/libmlx.dylib $@

all: libft dirs $(NAME)
	@$(ECHO) Compiling renderer
	$(COMPILER) -o $(NAME) $(MAIN) $(OBJ_FILES) $(LIBFT) $(MLX_ARGS)

	@$(ECHO) Compilation Succesful

dirs:
	@$(ECHO) Creating Directories
	@$(ECHO) $(BUILD_DIRS)
	@mkdir -p $(BUILD_DIRS) 

$(NAME): $(OBJ_FILES) assemble_tests
	$(COMPILER) $(MAIN) -o $(NAME) $(OBJ_FILES) $(LIBFT) $(MLX_ARGS)

libft:
	$(MAKE) libft

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

assemble_tests: $(TEST_OBJS)

retest: cleantests assemble_tests
	
retest_folder: cleantests $(TEST_OBJS) 

test_folder: retest_folder
	bash run_folder_tests.sh $(FOLDER_TEST)

cleantests:
	@$(ECHO) removing test files
	@rm -rf $(TEST_OBJS)

update_tags:
	ctags $(SOURCE_FILES) $(foreach dir, $(SOURCE_DIRS), $(wildcard $(dir)/.*h))
