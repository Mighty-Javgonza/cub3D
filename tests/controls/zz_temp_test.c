/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:52:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 18:56:38 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <mlx.h>

int	main()
{
	t_graphic_environment	ge;

	ge = init_graphic_environment((t_pixpos){200, 200});
	hook_controls(&ge.win, NULL);
}
