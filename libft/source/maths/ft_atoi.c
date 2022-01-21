/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:03:10 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:36:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char			*ptr;
	long long int	rvalue;
	char			sign;

	sign = 0;
	ptr = (char *)nptr;
	if (*ptr == '\0')
		return (0);
	while (ft_isspace(*ptr))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
		sign = *ptr++;
	rvalue = 0;
	while (*ptr >= '0' && *ptr <= '9')
	{
		if (rvalue > 9223372036854775807 / 10)
			return (sign == '-' ? 0 : -1);
		rvalue = rvalue * 10;
		rvalue += *ptr - '0';
		ptr++;
	}
	if (sign == '-')
		rvalue = -rvalue;
	return ((int)rvalue);
}
