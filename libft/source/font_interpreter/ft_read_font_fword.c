/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_font_fword.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:39:13 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 12:33:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_font_fword	ft_read_fword(char *buff)
{
	t_font_fword	rvalue;

	rvalue = *((t_font_fword *)buff);
	return (rvalue);
}
