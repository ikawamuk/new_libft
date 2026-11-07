/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:39:37 by ikawamuk          #+#    #+#             */
/*   Updated: 2026/11/07 05:39:00 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "libft/stddef.h"

// void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
// void	*ft_memmem(const void *haystack, size_t haystacklen,\
	const void *needle, size_t needlelen);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_mermchr(const void *s, int c, size_t n);
// char	*ft_stpcpy(char *dest, const char *src);
// char	*ft_stpncpy(char *dest, const char *src, size_t n);
// char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
// int	ft_strcoll(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
// size_t	ft_strcspn(const char *s, const char *reject);
char	*ft_strdup(const char *s);
// char	*ft_strerror(int errnum);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
// char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strndup(const char *s, size_t n);
size_t	ft_strnlen(const char *s, size_t maxlen);
char	*ft_strnstr(const char *big, const char *little, size_t len);
// char	*ft_strpbrk(const char *s, const char *accept);
char	*ft_strrchr(const char *s, int c);
// char *ft_strsignal(int sig);
// size_t	ft_strspn(const char *s, const char *accept);
char	*ft_strstr(const char *haystack, const char *needle);
// char *ft_strtok(char *str, const char *delim);
// size_t ft_strxfrm(char *dest, const char *src, size_t n);

#endif
