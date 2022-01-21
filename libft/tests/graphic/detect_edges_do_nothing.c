/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 10:31:37 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 10:38:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	t_gbuff		gbuff;
	t_gserver	gserver;
	
	gserver = ft_create_gserver();
	gbuff = ft_create_gbuff(400, 400, &gserver);
	ft_detect_edges(&gbuff);
	return (0);
}
