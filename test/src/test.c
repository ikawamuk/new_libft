/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 17:05:44 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 17:58:44 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("%s\n", "hello, world!");
	return (0);
}

/*
	comment out below lines on Makefile when run the test.
	LDFLAGS     := -nostdlib -pie
	CRT_OBJ     := $(OBJ_DIR)/crt1.o
*/
// int printf(const char *format, ...);

// int	main(void)
// {
// 	int		n;
// 	char	*s;

// 	n = 42;
// 	s = "hello world";

// 	printf("\n===== BASIC =====\n");
// 	printf("expected: [%c] [%s] [%d] [%i] [%u] [%x] [%X] [%%]\n",
// 		'A', s, n, -n, 42u, 255u, 255u);
// 	ft_printf("actual:   [%c] [%s] [%d] [%i] [%u] [%x] [%X] [%%]\n",
// 		'A', s, n, -n, 42u, 255u, 255u);

// 	printf("\n===== WIDTH =====\n");
// 	printf("expected: [%10d] [%-10d] [%010d]\n", n, n, n);
// 	ft_printf("actual:   [%10d] [%-10d] [%010d]\n", n, n, n);
// 	printf("expected: [%10s] [%-10s]\n", s, s);
// 	ft_printf("actual:   [%10s] [%-10s]\n", s, s);

// 	printf("\n===== PRECISION =====\n");
// 	printf("expected: [%.5d] [%.3s] [%.0d]\n", n, s, 0);
// 	ft_printf("actual:   [%.5d] [%.3s] [%.0d]\n", n, s, 0);
// 	printf("expected: [%10.5d] [%-10.5d] [%010.5d]\n", n, n, n);
// 	ft_printf("actual:   [%10.5d] [%-10.5d] [%010.5d]\n", n, n, n);

// 	printf("\n===== FLAGS =====\n");
// 	const char *fmt = "expected: [%+d] [% d] [%+ d] [%#x] [%#X]\n";
// 	printf(fmt, n, n, n, 255u, 255u);
// 	ft_printf("actual:   [%+d] [% d] [%+ d] [%#x] [%#X]\n",
// 		n, n, n, 255u, 255u);

// 	printf("\n===== ZERO =====\n");
// 	printf("expected: [%d] [%.0d] [%#x] [%.0x]\n", 0, 0, 0u, 0u);
// 	ft_printf("actual:   [%d] [%.0d] [%#x] [%.0x]\n", 0, 0, 0u, 0u);

// 	printf("\n===== LIMITS =====\n");
// 	printf("expected: [%d] [%d] [%u]\n", INT_MIN, INT_MAX, UINT_MAX);
// 	ft_printf("actual:   [%d] [%d] [%u]\n", INT_MIN, INT_MAX, UINT_MAX);

// 	printf("\n===== DYNAMIC WIDTH / PRECISION =====\n");
// 	printf("expected: [%*d] [%.*d] [%*.*d]\n",
// 		8, n, 5, n, 10, 5, n);
// 	ft_printf("actual:   [%*d] [%.*d] [%*.*d]\n",
// 		8, n, 5, n, 10, 5, n);

// 	printf("\n===== POINTER =====\n");
// 	printf("expected: [%p] [%p]\n", (void *)&n, (void *)0);
// 	ft_printf("actual:   [%p] [%p]\n", (void *)&n, (void *)0);

// 	printf("\n===== NULL CHARACTER =====\n");
// 	printf("expected: [A%cB]\n", '\0');
// 	ft_printf("actual:   [A%cB]\n", '\0');

// 	return (0);
// }