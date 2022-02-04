/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/04 16:20:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHICS_H
# define GRAPHICS_H

# include <stdlib.h>
# include "../cub_math/cub_math.h"
# include "../wall/wall.h"
# include "../ray_collider/ray_collider.h"
# include "../world/world.h"

# define DEFAULT_MINIMAP_RESOLUTION (t_pixpos){500, 500}
# define DEFAULT_MINIMAP_DRAW_POS (t_pixpos){0, 0}
# define DEFAULT_MINIMAP_BACKGROUND 0xa0000015

# define MINIPLAYER_COLOR

typedef struct s_pixpos
{
	size_t	x;
	size_t	y;
}				t_pixpos;

typedef struct s_graphic_image
{
	t_pixpos		res;
	void			*mlx_image;
	unsigned int	*addr;
	unsigned int	color;
	float			scale_factor;
	int				line_length;
}				t_graphic_image;

typedef struct s_graphic_environment
{
	void	*mlx;
	void	*win;
	void	*draw_buffer;
}				t_graphic_environment;

typedef struct s_minimap
{
	t_graphic_environment	*ge;
	t_graphic_image			img;
	t_world					*world;
	t_pixpos				draw_pos;
	unsigned int			background;
}				t_minimap;

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


t_minimap	init_minimap(t_graphic_environment *ge, t_world *w);
void	paint_minimap(t_minimap *mp);

void	minimap_display(t_minimap *mini);

void	minimap_paint_player(t_minimap *mini);
void	paint_miniplayer(t_graphic_image *img, t_player *p);

void	minimap_paint_player(t_minimap *mp);
void	paint_miniplayer_vision_cone(t_minimap *mp);


t_graphic_image	graphic_image_from_png(t_graphic_environment *ge, char *path);
#endif
