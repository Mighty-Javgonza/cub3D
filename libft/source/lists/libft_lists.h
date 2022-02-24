/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lists.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:21:19 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:49:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LISTS_H
# define LIBFT_LISTS_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstget(t_list *lst, int index);
void				*ft_lstget_last(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd(t_list **lst, int index, void *content);
void				ft_lstput_back(t_list **lst, void *content);
void				ft_lstdel(t_list *list);
void				ft_lstcdel(void (*del_func)(void *), t_list *list);
double				ft_lowest_d(t_list *dlist);
void				*ft_lsttoarr(t_list *lst);

#endif
