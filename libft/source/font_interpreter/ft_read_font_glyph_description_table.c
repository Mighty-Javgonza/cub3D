/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_font_glyph_description_table.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:45:46 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 12:34:13 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_glyph_description	ft_read_font_glyph_description_table(char *buff)
{
	char				*ptr;
	t_glyph_description	rvalue;

	ptr = buff;
	rvalue.contour_count = ft_read_font_ufword(ptr);
	ptr += sizeof(t_font_ufword);
	rvalue.min_x = ft_read_font_fword(ptr);
	ptr += sizeof(t_font_ufword);
	rvalue.min_y = ft_read_font_fword(ptr);
	ptr += sizeof(t_font_ufword);
	rvalue.max_x = ft_read_font_fword(ptr);
	ptr += sizeof(t_font_ufword);
	rvalue.max_y = ft_read_font_fword(ptr);
	return (rvalue);
}
