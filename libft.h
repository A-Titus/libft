/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:17:20 by atitus            #+#    #+#             */
/*   Updated: 2019/05/28 12:37:22 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef libft
#define libft

void		ft_putchar(char c);
void		ft_putstr(char const *s);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isprint(int a);
int			ft_isascii(int a);
int			ft_isalnum(int a);
int			ft_isdigit(int a);
int			ft_isalpha(int a);
int			ft_atoi(char *str);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlen(const char *str);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strdup(const char *s);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *str1, const void *str2, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
int     	ft_memcmp(const void *s1, const void *s2, size_t n);
void 		*ft_memchr(const void *str, int c, size_t n);
void		*ft_memmove(void *str1, const void *str2, size_t n);
char    	*ft_strstr(const char *haystack, const char *needle);
char    	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char const *s, int fd);

#endif
