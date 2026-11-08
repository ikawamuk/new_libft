/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_specifier_pipeline.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:14:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/08 15:18:00 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"
#include "libft/stdarg.h"
#include "printf_internal.h"
#include "libft/limits.h"

int		parse_format(t_option *option, const char **fmt);
int		retrieve_format_arguments(t_option *option, va_list *ap);
void	normalize_format_option(t_option *option);
void	pop_varg(t_argument *arg, enum e_type type, va_list ap);
int		convert_argument(t_field *field, const t_argument *argument);
int		format_field(t_field *field, const t_option *option);
long	output(const int fd, const t_field *field, const t_option *option);

static int	set_field_with_option(t_field *field, const t_option *option);
static void	set_sign(t_field *field, const t_option *option);
static int	set_string_base_len(t_field *field, const t_option *option);

long	process_specifier_pipeline(int fd, const char **fmt, va_list ap)
{
	t_option	option;
	t_argument	argument;
	t_field		field;

	++(*fmt);
	ft_memset(&option, 0, sizeof(t_option));
	ft_memset(&argument, 0, sizeof(t_argument));
	ft_memset(&field, 0, sizeof(t_field));
	if (parse_format(&option, fmt) < 0)
		return (-1);
	if (retrieve_format_arguments(&option, ap) < 0)
		return (-1);
	normalize_format_option(&option);
	pop_varg(&argument, option.conversion, ap);
	if (convert_argument(&field, &argument) < 0)
		return (-1);
	if (set_field_with_option(&field, &option) < 0)
		return (-1);
	return (output(fd, &field, &option));
}

static int	set_field_with_option(t_field *field, const t_option *option)
{
	if (option->conversion == INT)
		set_sign(field, option);
	if (option->conversion == STR)
		if (set_string_base_len(field, option) < 0)
			return (-1);
	return (0);
}

static void	set_sign(t_field *field, const t_option *option)
{
	if (field->is_negative)
		field->sign = '-';
	else if (option->flag & SIGNED)
		field->sign = '+';
	else if (option->flag & PAD_POS)
		field->sign = ' ';
}

static int	set_string_base_len(t_field *field, const t_option *option)
{
	t_size	limit;

	limit = INT_MAX;
	if (option->precision >= 0)
		limit = option->precision;
	field->base_len = ft_strnlen(field->base_str, limit);
	if (option->precision < 0
		&& field->base_len == INT_MAX
		&& field->base_str[INT_MAX] != '\0')
		return (-1);
	return (0);
}
