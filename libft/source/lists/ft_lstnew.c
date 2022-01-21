/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:04:48 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 11:02:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*rvalue;

	rvalue = malloc(sizeof(*rvalue));
	rvalue->content = content;
	rvalue->next = (void *)0;
	return (rvalue);
}
