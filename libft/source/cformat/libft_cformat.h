/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_cformat.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 09:21:57 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:51:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CFORMAT_H
# define LIBFT_CFORMAT_H

# define FORMAT_INDICATOR '%'

# define NO_ARGS 0
# define ARGS_CONVERTER 1
# define ARGS_WIDTH 2
# define ARGS_PREC 4

/*
** For the sets the identifiers correspond to the \
** place they appear in the string
** For example:
**  		- s will have the code 1
**  		- +0# will have code 1<<1 | 1<<3 | 1<<5
** 			- hh will have -2 and ll 2
*/

# define CONV_SET "cspdiuxX%nfge"
# define NO_ARG_CONVS "n%"
# define FLAG_SET "+-0 #="
# define FLAG_PLUS 1
# define FLAG_LA 2
# define FLAG_ZPAD 4
# define FLAG_SPACE 8
# define FLAG_HASH 16
# define FLAG_CENTER 32
# define LENGTH_SET "hl"

# define SEPARATOR_ARGS '$'
# define SEPARATOR_PREC '.'

# define ARGS_READER '*'

# include "../../libft.h"
# include <stdarg.h>

/*
** in_vargs number of input vargs
** vargs_code what shoud be read thorugh vargs
** arg: The starting arg_index of the block, if width and prec are passed
** 		as args then this number is the index of the converter arg - 2
** flags: flags present
** width: number of chars in width
** prec: number of chars in prec
** conv: the converter (codes explained above)
** str: the string class to work with
** args: a pointer to all pointers of the vargs in printf
** state: 0-Empty 1-Format read 2-Vargs loaded 3-String finished
*/

typedef struct	s_print_block
{
	t_uint			vargs_code;
	int				arg;
	t_uint			flags;
	int				width;
	int				prec;
	int				length;
	int				conv;
	t_all_types		conv_data;
	struct s_string	str;
	t_all_types		**args;
	int				state;
}				t_print_block;

typedef char *(*t_converter)(t_all_types data, int length);

char			*ft_conv_c(t_all_types data, int length);
char			*ft_conv_s(t_all_types data, int length);
char			*ft_conv_p(t_all_types data, int length);
char			*ft_conv_i(t_all_types data, int length);
char			*ft_conv_u(t_all_types data, int length);
char			*ft_conv_xl(t_all_types data, int length);
char			*ft_conv_xu(t_all_types data, int length);

int				ft_cformat_check_arg_width(int vargs_code);
int				ft_cformat_check_arg_prec(int vargs_code);
int				ft_cformat_check_length(char *length_start);
int				ft_cformat_check_format(char *bformat);

int				ft_cformat_is_num_conv(int conv);
int				ft_cformat_read_conv(char *bformat);
int				ft_cformat_read_arg(char *bformat);
int				ft_cformat_read_length(char *bformat);
int				ft_cformat_read_width(char *str);
int				ft_cformat_read_prec(char *str);
t_uint			ft_cformat_read_flags(char *bformat);
int				ft_cformat_read(struct s_string *format, t_list **dest_list);
int				ft_cformat_read_arg(char *bformat);
int				ft_cformat_vargs_code(t_print_block block);
t_print_block	ft_cformat_read_block(char *str);

void			ft_recalculate_block_vargs(t_print_block *block, \
												int *auto_index);
void			ft_recalculate_all_block_vargs(t_list *blocks, \
												int auto_index);
t_all_types		ft_varg_read_switch(int conv, va_list vargs);
void			ft_cformat_put_block_vargs_list(t_list *types_list, \
									t_print_block *block, va_list vlist);
t_all_types		**ft_cformat_read_vargs(va_list vlist, t_list *blocks);
char			*ft_convert_switch(t_all_types data, int conv, int length);
void			ft_cformat_put_no_conversion(t_print_block *block);
void			ft_cformat_block_writer(t_print_block *block);

void			ft_cformat_block_destroy(void *block);
void			ft_cformat_destroy_blocklist(t_list *blocks);

void			ft_cformat_apply_flag_plus(t_print_block *block);
void			ft_cformat_apply_flag_space(t_print_block *block);
void			ft_prec_switch(int prec, struct s_string *str, int conv);
void			ft_width_switch(int prec, struct s_string *str, int flags, \
									int isnumber);

#endif
