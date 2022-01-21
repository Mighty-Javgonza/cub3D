/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_glyph.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 11:52:44 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 13:02:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
/*	t_gserver		gserver;
	t_gwindow		gwin;
	t_gbuff			gbuff;
*/	struct s_string	str;
	char			*glyph_init;

	/*gserver = ft_create_server();
	gwin = ft_create_window(400, 400, "Font test", &gserver);
	gbuff = ft_create_buff(400, 400, &gserver);
	*/
	str = ft_ftos("tests/font_interpreter/Comfortaa-Regular.ttf");
	glyph_init = ft_strnstr(str.s, "glyf", str.length);
 printf("%s\n", glyph_init);	
 //	c_string.print(&str);
}
