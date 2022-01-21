/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_switch.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:47:08 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/22 11:52:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	add_left(int width, char c, struct s_string *str, int is_number)
{
	int count;
	int	start;

	count = width - (int)str->length;
	if (count < 0)
		return ;
	if (is_number && (str->s[0] == '-' || str->s[0] == '+') && c == '0')
		start = 1;
	else
		start = 0;
	str->append_chars(str, c, count, start);
}

static void	add_right(int width, char c, struct s_string *str)
{
	int count;

	count = width - (int)str->length;
	if (count < 0)
		return ;
	str->append_chars(str, c, count, -1);
}

/*static void add_both(int width, char c, struct s_string *str)
{
	int count;
	int to_left;
	int to_right;

	count = width - (int)str->length;
}
*/
static char	get_char_to_add(int flags)
{
	if ((flags & FLAG_ZPAD) != 0)
		return ('0');
	else
		return (' ');
}

/*
** Will add characters or not depending on '0' and '-' flags,
** width value, str->length and if the string represents a number
*/

void		ft_width_switch(int width, struct s_string *str, int flags, \
							int isnumber)
{
	char	char_to_add;

	if (width == -1)
		return ;
	char_to_add = get_char_to_add(flags);
	if ((flags & FLAG_LA) != 0)
		add_right(width, char_to_add, str);
	else
		add_left(width, char_to_add, str, isnumber);
}
