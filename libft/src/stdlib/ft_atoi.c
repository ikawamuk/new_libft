/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:38:35 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 20:55:54 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stdlib.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	neg;

	n = 0;
	neg = 0;
	while (ft_isspace(*str))
		++str;
	if (*str == '-')
		neg = 1;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
		n = 10 * n - (*str++ - '0');
	if (neg)
		return (n);
	return (-n);
}
