/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:17:20 by atitus            #+#    #+#             */
/*   Updated: 2019/05/21 11:12:57 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

#endif
