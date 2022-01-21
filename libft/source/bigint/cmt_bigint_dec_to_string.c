/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmt_bigint_dec_to_string.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:43:17 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 13:54:02 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			add_last_char(struct s_string *n, struct s_bigint *mod)
{
	char			last_char;

	last_char = mod->data[mod->size - 1] + '0';
	n->append_chars(n, last_char, 1, 0);
}

void			put_chars_in_string(struct s_string *n, struct s_bigint *this)
{
	struct s_bigint	copy;
	struct s_bigint	ten;
	struct s_bigint	mod;

	copy = c_bigint.copy(this);
	ten = c_bigint.new(this->size);
	ten.set_base_value(&ten, 10);
	while (c_bigint.compare(&copy, &ten) >= 0)
	{
		mod = copy.div_mod(&copy, &ten);
		add_last_char(n, &mod);
	}
	mod = copy.div_mod(&copy, &ten);
	add_last_char(n, &mod);
}

struct s_string	cmt_bigint_dec_to_string(struct s_bigint *this)
{
	struct s_string str;

	str = c_string.new("");
	put_chars_in_string(&str, this);
	return (str);
}
