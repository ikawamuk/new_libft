/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_specifier_pipeline.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:14:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 23:52:17 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/stdarg.h"

long	process_specifier_pipeline(int fd, const char **fmt, va_list ap)
{
	++(*fmt);
	/*
		1.書式解析 Format parsing
		2.引数取得 Argument retrieval
		3.整数変換 Integer conversion
		4.出力制御 Output control
	*/
}
