/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 10:31:37 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:52:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	draw_test_rects(t_gbuff *gbuff)
{
	t_rect	rect;

	ft_set_color_gbuff(gbuff, 0x00FFFFFF);
	rect = ft_create_rect(0, 0, 200, 200);
	ft_draw_rect(rect, gbuff);
	ft_set_color_gbuff(gbuff, 0x00000000);
	rect.x += 200;
	ft_draw_rect(rect, gbuff);
}

static int	check_values(t_byte *result)
{
	size_t c_x;

	c_x = 199;
	for (size_t c_y = 0; c_y < 199; c_y++)
	{
		if (*(result + (c_x + c_y * 400)) != 1)
			return (-1);
	}
	return (1);
}
int			main()
{
	t_gbuff		gbuff;
	t_gserver	gserver;
	t_byte		*result;
	
	gserver = ft_create_gserver();
	gbuff = ft_create_gbuff(400, 400, &gserver);
	draw_test_rects(&gbuff);
	result = ft_detect_edges(&gbuff);
	if (check_values(result) != 1)
		return (-1);
	return (0);
}
