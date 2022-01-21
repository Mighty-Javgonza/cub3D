/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_font_simple_glyph_definition.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:09:19 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 12:43:35 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	read_contour_end_points(t_font_glyph *glyph, char *buff)
{
	char	*ptr;
	size_t	offset;
	t_usint	c_count;

	c_count = 0;
	offset = 0;
	ptr = buff;
	while(c_count < glyph->desc.contour_count)
	{
		glyph->contours[c_count].last_point_index = ft_read_font_ufword(ptr);
		ptr += sizeof(t_font_ufword);
		offset += sizeof(t_font_ufword);
	}
	return (offset);
}
/*
static size_t	read_flags(t_font_glyph *glyph, char *buff)
{
}
*/
/*
** p_off is the offset between the x_coordinates array 
** and the y_coordinates array
*/

static t_font_point	read_point(char *buff, t_usint p_off)
{
	t_font_point	rvalue;

	rvalue.x.u16 = ft_read_font_fword(buff);
	rvalue.y.u16 = ft_read_font_fword(buff + p_off);
	return (rvalue);
}

static size_t	read_contour(t_font_contour *cntr, char *buff, t_usint p_off)
{
	t_usint	current_point;
	size_t	rvalue;

	current_point = 0;
	rvalue = 0;
	while (current_point < cntr->last_point_index)
	{
		cntr->points[current_point] = read_point(buff, p_off);
		current_point++;
	}
	return (((current_point - 1) * 2) * sizeof(t_usint));
}

size_t	ft_read_font_simple_glyph_definition(t_font_glyph *glyph, char *buff)
{
	size_t	read_offset;
	t_usint	instruction_length;
	size_t	current_contour;

	read_offset = read_contour_end_points(glyph, buff);
	instruction_length = ft_read_font_ufword(buff + read_offset);
	read_offset += (instruction_length + 1) * sizeof(t_font_ufword);
	current_contour = 0;	
	while (current_contour < glyph->desc.contour_count)
	{
		read_offset += read_contour(&glyph->contours[current_contour], buff + read_offset, glyph->contours[glyph->desc.contour_count - 1].last_point_index * sizeof(t_usint));
		current_contour++;
	}
	return (read_offset);
}
