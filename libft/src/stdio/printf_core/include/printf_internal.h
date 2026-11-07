/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_internal.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:25:47 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 01:28:21 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_INTERNAL_H
# define PRINTF_INTERNAL_H

typedef union u_arg
{
	int				i;
	unsigned int	u;
	void			*p;
}	t_arg;

enum e_type
{
	CHAR,
	DEC,
	U_INT,
	HEX_LOW,
	HEX_UP,
	STR,
	PTR,
	PERCENT
};

typedef struct s_option
{
	unsigned int	flag;
	int				width;
	int				precision;
	enum e_type		type;
}	t_option;

#endif
