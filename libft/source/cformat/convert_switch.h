/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_switch.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:24:12 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:18:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_SWITCH_H
# define CONVERT_SWITCH_H

# include "../ft_printf_inner.h"

typedef	char *(*t_converter)(t_all_types);

char	*ft_conv_c(t_all_types data);
char	*ft_conv_s(t_all_types data);
char	*ft_conv_p(t_all_types data);
char	*ft_conv_i(t_all_types data);
char	*ft_conv_u(t_all_types data);
char	*ft_conv_xl(t_all_types data);
char	*ft_conv_xu(t_all_types data);

#endif
