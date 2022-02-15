/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:23:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 16:01:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	if (!validate_color("0,0,0"))
		return (-1);
	if (validate_color("3,-10,255"))
		return (-1);
	if (!validate_color("255,255,255"))
		return (-1);
	if (validate_color("hola,caracola,0"))
		return (-1);
	if (validate_color("0,0,0,14"))
		return (-1);
	return (0);
}
