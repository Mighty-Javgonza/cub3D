/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_font_ufword.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:43:42 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 12:38:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_font_ufword	ft_read_font_ufword(char *buff)
{
	t_font_ufword	rvalue;

	rvalue = *(t_font_ufword *)buff;
	return (rvalue);
}
