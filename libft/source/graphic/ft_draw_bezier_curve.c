/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_bezier_curve.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 12:29:32 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:46:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The value of point must be between 0 and 1
*/

static double	bezier_max_length(t_quad_bezier bezier)
{
	double	rvalue;

	rvalue = ft_dist(bezier.p1, bezier.p2);
	rvalue += ft_dist(bezier.p2, bezier.p3);
	return (rvalue);
}

static t_point	get_point_in_curve(double point, t_quad_bezier bezier)
{
	t_point	rvalue;
	double	sub;

	sub = 1 - point;
	rvalue = ft_vmult(bezier.p1, sub * sub);
	rvalue = ft_vsum(rvalue, ft_vmult(bezier.p2, sub * 2 * point));
	rvalue = ft_vsum(rvalue, ft_vmult(bezier.p3, point * point));
	return (rvalue);
}

void			ft_draw_bezier(t_quad_bezier bezier, t_gbuff *gbuff)
{
	double	point;
	double	step_size;
	t_point	rp;

	step_size = 1 / bezier_max_length(bezier) / 2;
	point = 0;
	while (point <= 1.0 - step_size)
	{
		rp = get_point_in_curve(point, bezier);
		ft_put_pixel_in_buff((size_t)rp.x, (size_t)(rp.y), \
				gbuff->paint_color, gbuff);
		point += step_size;
	}
}
