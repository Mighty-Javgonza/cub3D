NAME = libftprintf

#----All files and sources----#
FOLDERS = IO						\
			flow					\
			maths					\
			isfunctions				\
			memory_manipulators		\
			sorting					\
			str_manipulators		\
			string					\
			bigint					\
			lists					\
			cformat					\
			ft_printf				\
			graphic					\
			UI_Window				\
			font_interpreter

SOURCE_PREF =source/
BUILD_PREF =build/
TEST_PREF = tests/

SOURCE_DIRS = $(addprefix $(SOURCE_PREF), $(FOLDERS))
SOURCE_FILES = $(foreach dir, $(SOURCE_DIRS), $(wildcard $(dir)/*.c))
OBJ_FILES = $(subst $(SOURCE_PREF), $(BUILD_PREF), $(SOURCE_FILES:.c=.o))

FILE_NAMES = $(basename $(SOURCE_FILES))

TEST_DIRS = $(subst $(SOURCE_PREF), $(TEST_PREF), $(SOURCE_DIRS))
TEST_FILES = $(foreach dir, $(TEST_DIRS), $(wildcard $(dir)/*.c))
TEST_TOOLS = $(TEST_PREF)test_tools/run_leaks.c

#--Implementation definitions--#
MLX_DEFINITION = USING_MLX
MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit
IMPLEMENTATION = -D $(MLX_DEFINITION)

#----Compiler definition----#
LFLAG = -include libft.h -include type_defs.h
CFLAGS = -Wall -Wextra -Werror 
CCOMP = gcc
COMPILER = $(CCOMP) $(LFLAG) $(CFLAGS) $(IMPLEMENTATION) 

LIBFT_ADVISOR = LIBFT:

#----Rules definition----#

#How to build objects
%.o:%.c
	@echo $(LIBFT_ADVISOR) compiling $<
	@$(COMPILER) -c -o $(subst $(SOURCE_PREF),$(BUILD_PREF), $@) $<

#For buiding tests
%.lib_test:%.c
	@echo $(LIBFT_ADVISOR) building $<
	@$(COMPILER) $(MLX_FLAGS) -o $@ $< $(NAME).a $(TEST_TOOLS) -include $(TEST_PREF)/test_tools/test_tools.h

all: buildirs $(NAME)
	@echo $(LIBFT_ADVISOR) building archive
	@ar -crs $(NAME).a $(OBJ_FILES)

buildirs:
	cd $(BUILD_PREF) && mkdir -p $(FOLDERS)

$(NAME): compile

compile: $(SOURCE_FILES:.c=.o)

clean:
	@echo $(LIBFT_ADVISOR) deleting objects
	@rm -f $(OBJ_FILES)

fclean: clean
	@echo $(LIBFT_ADVISOR) deleting archive
	@rm -f $(NAME) $(NAME:.a=.so)
	@echo $(LIBFT_ADVISOR) deleting test_files
	@rm -f $(TEST_FILES:.c=.lib_test)

re: fclean all

reno: fclean noflags build

noflags:
	$(CCOMP) $(LFLAG) -c $(FILES)
	@ar -crs $(NAME).a $(OBJECTS)

assemble_tests: $(subst .c,.lib_test,$(TEST_FILES))

retest: cleantests assemble_tests

cleantests:
	@echo $(LIBFT_ADVISOR) removing test files
	@rm -rf $(TEST_FILES:.c=.lib_test)

run_tests:
	$(foreach test, $(TEST_FILES), $(call run_test, $(test)))
