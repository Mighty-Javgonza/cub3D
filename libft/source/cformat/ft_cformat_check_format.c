/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_check_format.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:11:34 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 11:33:28 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns 0 if it doest apply, -1 if error and index of '$' otherwise
*/

static int	check_arg(char *arg_start)
{
	int		arg_by_format;
	size_t	i;

	arg_by_format = 0;
	if (ft_isdigit(*arg_start) && ft_strchr(arg_start, SEPARATOR_ARGS) != 0)
		arg_by_format = 1;
	if (!arg_by_format)
		return (0);
	i = 0;
	while (arg_start[i] != SEPARATOR_ARGS)
	{
		if (!ft_isdigit(arg_start[i]))
			return (-1);
		i++;
	}
	if (ft_strchr(&arg_start[i], SEPARATOR_ARGS) != 0)
		return (-1);
	return ((int)i);
}

static int	check_flags(char *flag_start)
{
	size_t	i;

	if (!ft_ischarset(*flag_start, FLAG_SET))
		return (0);
	i = 0;
	while (ft_ischarset(flag_start[i], FLAG_SET))
		i++;
	return (i);
}

static int	check_width(char *width_start)
{
	size_t	i;

	if (*width_start == ARGS_READER)
		return (1);
	if (!ft_isdigit(*width_start))
		return (0);
	i = 0;
	while (ft_isdigit(width_start[i]))
		i++;
	return (i);
}

static int	check_prec(char *prec_start)
{
	size_t	i;

	if (*prec_start != SEPARATOR_PREC)
		return (0);
	i = 1;
	if (prec_start[i] == ARGS_READER)
		return (i + 1);
	while (ft_isdigit(prec_start[i]))
		i++;
	return (i);
}

/*
** Checks if a format is valid
** Needs a pointer to '%'
*/

int			ft_cformat_check_format(char *bformat)
{
	int	index;

	index = check_arg(&bformat[1]);
	if (index < 0)
		return (0);
	index += check_flags(&bformat[index]);
	index += check_width(&bformat[index]);
	index += check_prec(&bformat[index]);
	index += ft_cformat_check_length(&(bformat[index]));
	if (!ft_ischarset(bformat[index], CONV_SET))
		return (0);
	return (1);
}
