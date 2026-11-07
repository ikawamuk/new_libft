/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctype.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 23:52:49 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 00:51:56 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTYPE_H
# define CTYPE_H

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isblank(int c);
int	ft_iscntrl(int c);
int	ft_isdigit(int c);
int	ft_isgraph(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_ispunct(int c);
int	ft_isspace(int c);
int	ft_isupper(int c);
int	ft_isxdigit(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
