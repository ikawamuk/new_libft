/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_internal.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:25:47 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 04:10:44 by ikawamuk         ###   ########.fr       */
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

# define ALT_FORM 0b00001 // '#'
# define ZERO_PAD 0b00010 // '0'
# define LEFT_ADJ 0b00100 // '-'
# define PAD_POS  0b01000 // ' '
# define SIGNED   0b10000 // '+'
# define FLAGMASK 0b11111

enum e_type
{
	INVALID,
	CHAR,
	INT,
	U_INT,
	HEX_LOW,
	HEX_UP,
	STR,
	PTR,
};

typedef struct s_option
{
	unsigned int	flag;
	bool			arg_width;
	bool			arg_precision;
	int				width;
	int				precision;
	enum e_type		conversion;
}	t_option;

#endif
