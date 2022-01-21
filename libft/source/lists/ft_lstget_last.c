/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:24:13 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/26 12:24:14 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

/*
** Returns a pointer to the contents of the last item in the list
*/

void	*ft_lstget_last(t_list *lst)
{
	void	*rvalue;
	int		lsize;

	lsize = ft_lstsize(lst);
	rvalue = ft_lstget(lst, lsize)->content;
	return (rvalue);
}
