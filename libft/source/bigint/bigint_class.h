/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:00:30 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/30 17:31:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGINT_CLASS_H
# define BIGINT_CLASS_H

# include <stdlib.h>

typedef int ola;



struct							s_bigint
{
	long long unsigned int		*data;
	unsigned int				size;

	void						(*set_base_value)(struct s_bigint *this, \
												long long unsigned int value);
	void						(*shift_left)(struct s_bigint *this, \
												unsigned int amount);
	void						(*shift_right)(struct s_bigint *this, \
												unsigned int amount);
	void						(*set_bit)(struct s_bigint *this, \
												size_t bit_index, char value);
	void						(*add)(struct s_bigint *this, \
											struct s_bigint *add);
	void						(*sub)(struct s_bigint *this, \
											struct s_bigint *sub);
	void						(*mult)(struct s_bigint *this, \
											struct s_bigint *mult);
	void						(*div)(struct s_bigint *this, \
											struct s_bigint *div);
	void						(*mod)(struct s_bigint *this, \
											struct s_bigint *div);
	struct s_bigint				(*div_mod)(struct s_bigint *this, \
											struct s_bigint *div);
};

struct							s_c_bigint
{
	struct s_bigint				(*new)(unsigned int size);
	struct s_bigint				(*copy)(struct s_bigint *src);
	void						(*destroy)(struct s_bigint *this);
	struct s_string				(*hex_to_string)(struct s_bigint *this);
	struct s_string				(*dec_to_string)(struct s_bigint *this);
	int							(*isequal)(struct s_bigint n1, \
											struct s_bigint n2);
	long long int				(*compare)(struct s_bigint *n1, \
											struct s_bigint *n2);
};

void							mt_bigint_set_base_value(struct s_bigint *this,\
												long long unsigned int value);
void							mt_bigint_shift_left(struct s_bigint *this,\
													unsigned int amount);
void							mt_bigint_shift_right(struct s_bigint *this,\
													unsigned int amount);

void							mt_bigint_set_bit(struct s_bigint *this,\
											size_t index, char value);

void							mt_bigint_add(struct s_bigint *this, \
													struct s_bigint *add);

void							mt_bigint_sub(struct s_bigint *this, \
													struct s_bigint *sub);

void							mt_bigint_mult(struct s_bigint *this, \
													struct s_bigint *mult);

void							mt_bigint_div(struct s_bigint *this, \
													struct s_bigint *div);

void							mt_bigint_mod(struct s_bigint *this, \
													struct s_bigint *div);

struct s_bigint					mt_bigint_div_mod(struct s_bigint *this, \
													struct s_bigint *div);

int								cmt_bigint_isequal(struct s_bigint n1, \
												struct s_bigint n2);

long long int					cmt_bigint_compare(struct s_bigint *n1, \
												struct s_bigint *n2);

struct s_string					cmt_bigint_dec_to_string(struct s_bigint *this);

extern const struct s_c_bigint	c_bigint;

#endif
