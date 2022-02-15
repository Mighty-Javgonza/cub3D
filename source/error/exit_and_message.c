/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_and_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:50:53 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 15:24:06 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include "../../libft/libft.h"
#include <unistd.h>
#define ERROR_OCURRED "An error has ocurred\n"

void	exit_and_message(char *message)
{
	write(STDOUT_FILENO, message, ft_strlen(message));
	exit(-1);
}
