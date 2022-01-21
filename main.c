#include "libft/libft.h"
#define SCREEN_WIDTH 500
#define SCREEN_HEIGHT 500

static void	draw(t_gbuff *gbuff)
{
	t_rect	r;

	r = ft_create_rect(0, 0, 10, 10);
	ft_set_color_gbuff(gbuff, 0x00FF0000);
	ft_draw_rect(r, gbuff);
}

int main()
{
	t_gserver	gserver;
	t_gwindow	gwin;
	t_gbuff		gbuff;

	gserver = ft_create_gserver();
	gwin = ft_create_window(SCREEN_WIDTH, SCREEN_WIDTH, "BONSAI", &gserver);
	gbuff = ft_create_gbuff(SCREEN_WIDTH, SCREEN_HEIGHT, &gserver);
	draw(&gbuff);
	ft_display_buff(&gbuff, &gwin);
	ft_gserver_begin_loop(&gserver);
}
