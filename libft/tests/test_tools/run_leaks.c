/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_leaks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 10:09:50 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:30:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ALways gives at least 1 leak
*/

#ifdef LEAKS_CHECK

void	test_leaks(char *prog_name)
{
	char	*command;

	command = ft_strjoin("leaks ", prog_name);
	system(command);
	free(command);
}

#else

void	test_leaks(char *prog_name)
{
	if (prog_name != 0)
		prog_name = 0;
}

#endif
