/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 17:03:23 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHICS_H
# define GRAPHICS_H

# include <stdlib.h>
# include "../cub_math/cub_math.h"
# include "../wall/wall.h"
# include "../ray_collider/ray_collider.h"

# define DEFAULT_MINIMAP_RESOLUTION (t_pixpos){500, 500}
# define DEFAULT_MINIMAP_DRAW_POS (t_pixpos){0, 0}
# define DEFAULT_MINIMAP_BACKGROUND 0xa0000015

# define MINIPLAYER_COLOR

typedef struct s_pixpos
{
	size_t	x;
	size_t	y;
}				t_pixpos;

typedef struct s_bound_area
{
	t_pixpos	top_left;
	t_pixpos	bot_right;
}				t_bound_area;

typedef t_pixpos	t_resolution;

typedef struct s_graphic_image
{
	t_resolution		res;
	void			*mlx_image;
	unsigned int	*addr;
	unsigned int	color;
	float			scale_factor;
	int				line_length;
}				t_graphic_image;

typedef struct s_graphic_environment
{
	void			*mlx;
	void			*win;
	t_graphic_image	draw_buffer;
}				t_graphic_environment;

t_graphic_environment	init_graphic_environment(t_pixpos res);
t_graphic_image	init_graphic_image();
void	set_graphic_image_resolution(t_graphic_image *img, t_graphic_environment *ge, t_pixpos res);
t_graphic_image	new_graphic_image(t_graphic_environment *ge, t_pixpos res);
void	display_image(t_graphic_environment *ge, t_graphic_image *img, t_pixpos p);
void	paint_segment(t_graphic_image *img, t_segment *s);
void	paint_bound_collider(t_graphic_image *img, t_bound_collider *col);
void	paint_ray_collider(t_graphic_image *img, t_ray_collider *rc);
void	paint_world(t_graphic_image *img, t_world *w);
void	put_pixel(t_graphic_image *img, t_vector pos, unsigned int color);
void	paint_rect(t_graphic_image *img, t_rectangle r);
void	clear_image(t_graphic_image *img);
t_graphic_image	graphic_image_from_png(t_graphic_environment *ge, char *path);
t_graphic_image	*new_image_from_png(t_graphic_environment *ge, char *path);
void	display_camera_view(t_graphic_environment *ge, t_camera *camera);

void	destroy_graphic_environment(t_graphic_environment *ge);
void	destroy_graphic_image(t_graphic_image *img, void *mlx);



void	print_bound_area(t_bound_area area);
#endif
