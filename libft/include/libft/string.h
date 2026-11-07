/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:39:37 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 21:31:39 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "libft/stddef.h"
# include "libft/stdlib.h"

// void	*ft_memccpy(void *dest, const void *src, int c, t_size n);
void	*ft_memchr(const void *s, int c, t_size n);
int		ft_memcmp(const void *s1, const void *s2, t_size n);
void	*ft_memcpy(void *dest, const void *src, t_size n);
// void	*ft_memmem(const void *haystack, t_size haystacklen, \
// void *needle, t_size needlelen);
void	*ft_memmove(void *dest, const void *src, t_size n);
void	*ft_memset(void *s, int c, t_size n);
void	*ft_mermchr(const void *s, int c, t_size n);
// char	*ft_stpcpy(char *dest, const char *src);
// char	*ft_stpncpy(char *dest, const char *src, t_size n);
// char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
// int	ft_strcoll(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
// t_size	ft_strcspn(const char *s, const char *reject);
char	*ft_strdup(const char *s);
// char	*ft_strerror(int errnum);
t_size	ft_strlcat(char *dst, const char *src, t_size size);
t_size	ft_strlcpy(char *dst, const char *src, t_size size);
t_size	ft_strlen(const char *s);
// char	*ft_strncat(char *dest, const char *src, t_size n);
int		ft_strncmp(const char *s1, const char *s2, t_size n);
// char	*ft_strncpy(char *dest, const char *src, t_size n);
char	*ft_strndup(const char *s, t_size n);
t_size	ft_strnlen(const char *s, t_size maxlen);
char	*ft_strnstr(const char *big, const char *little, t_size len);
// char	*ft_strpbrk(const char *s, const char *accept);
char	*ft_strrchr(const char *s, int c);
// char *ft_strsignal(int sig);
// t_size	ft_strspn(const char *s, const char *accept);
char	*ft_strstr(const char *haystack, const char *needle);
// char *ft_strtok(char *str, const char *delim);
// t_size ft_strxfrm(char *dest, const char *src, t_size n);

#endif
