/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_font_interpreter.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:08:47 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 12:57:17 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_FONT_INTERPRETER_H
# define LIBFT_FONT_INTERPRETER_H

typedef short int			t_font_fword;
typedef unsigned short int	t_font_ufword;

typedef unsigned char		t_font_point_flag;

# define FONT_POINT_FLAG_OFF_CURVE 1
# define FONT_POINT_FLAG_X_SHORT_VECTOR 2
# define FONT_POINT_FLAG_Y_SHORT_VECTOR 4
# define FONT_POINT_FLAG_X_SAME 16
# define FONT_POINT_FLAG_Y_SAME 32

union						u_font_point_cord
{
	t_byte					u8;
	t_usint					u16;
};

typedef struct				s_font_point
{
	union u_font_point_cord	x;
	union u_font_point_cord	y;
	t_byte					on_curve;
}							t_font_point;

typedef struct				s_font_contour
{
	t_font_point_flag		*flags;
	t_font_point			*points;
	t_usint					last_point_index;		
}							t_font_contour;

typedef struct				s_glyph_description
{
	t_font_fword			min_x;
	t_font_fword			max_x;
	t_font_fword			min_y;
	t_font_fword			max_y;
	short unsigned int		contour_count;
}							t_glyph_description;

typedef struct				s_font_glyph
{
	t_font_contour			*contours;
	size_t					letter_code;
	t_glyph_description		desc;
}							t_font_glyph;

typedef struct				s_font
{
	t_font_glyph			letters;
	size_t					letter_count;
}							t_font;

t_font_fword	ft_read_font_fword(char *buff);
t_font_ufword	ft_read_font_ufword(char *buff);

t_glyph_description	ft_read_font_glyph_description_table(char *buff);
size_t	ft_read_font_simple_glyph_definition(t_font_glyph *glyph, char *buff);
#endif
