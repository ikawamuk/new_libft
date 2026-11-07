/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_internal.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:25:47 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 03:06:03 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_INTERNAL_H
# define PRINTF_INTERNAL_H

# include "libft/stdbool.h"

typedef union u_arg
{
	int				i;
	unsigned int	u;
	void			*p;
}	t_arg;

# define ALT_FORM (1U << '#' - ' ') // '#': 0b0000 0000 0000 0000 1000
# define ZERO_PAD (1U << '0' - ' ') // '0': 0b0001 0000 0000 0000 0000
# define LEFT_ADJ (1U << '-' - ' ') // '-': 0b0000 0010 0000 0000 0000
# define PAD_POS  (1U << ' ' - ' ') // ' ': 0b0000 0000 0000 0000 0001
# define SIGNED   (1U << '+' - ' ') // '+': 0b0000 0000 1000 0000 0000
# define FLAGMASK (ALT_FORM | ZERO_PAD | LEFT_ADJ | PAD_POS | SIGNED)
// FLAGMASK: 0b0001 0010 1000 0000 1001

enum e_type
{
	CHAR,
	INT,
	U_INT,
	HEX_LOW,
	HEX_UP,
	STR,
	PTR,
};

static const unsigned char conversion_table['z' - 'A' + 1] = {
	['c' - 'A'] = CHAR,
	['d' - 'A'] = INT,
	['i' - 'A'] = INT,
	['u' - 'A'] = U_INT,
	['x' - 'A'] = HEX_LOW,
	['X' - 'A'] = HEX_UP,
	['s' - 'A'] = STR,
	['p' - 'A'] = PTR
};

typedef struct s_option
{
	unsigned int	flag;
	BOOL			arg_width;
	BOOL			arg_precision;
	int				width;
	int				precision;
	enum e_type		conversion;
}	t_option;

#endif
