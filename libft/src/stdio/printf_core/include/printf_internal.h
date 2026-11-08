/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_internal.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:25:47 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 16:33:02 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_INTERNAL_H
# define PRINTF_INTERNAL_H

# include "libft/stdbool.h"
# include "libft/stddef.h"

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

typedef struct s_arg
{
	enum e_type		type;
	union
	{
		int		i;
		void	*p;
	};
}	t_argument;

typedef struct s_option
{
	unsigned int	flag;
	BOOL			arg_width;
	BOOL			arg_precision;
	int				width;
	int				precision;
	enum e_type		conversion;
}	t_option;

typedef struct s_base_string
{
	char		buffer[1024];
	char		*base_str;
	t_size		base_len;
}	t_base_str;

typedef struct s_format
{
	const char		*prefix;
	char			sign;
	t_size			padding;
	char			pad_char;
	BOOL			is_left_adjust;
	t_size			precision_zeros;
}	t_format;

#endif
