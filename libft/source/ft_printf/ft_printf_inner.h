/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_inner.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 08:48:11 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/09 12:17:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_INNER_H
# define FT_PRINTF_INNER_H

# include <stdio.h>

void	ft_write_all_fblocks(t_list *fblocks, struct s_string *str);

#endif
