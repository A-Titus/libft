/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:17:20 by atitus            #+#    #+#             */
/*   Updated: 2019/05/24 11:17:38 by atitus           ###   ########.fr       */
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

#endif
