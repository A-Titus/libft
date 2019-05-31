/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:23:09 by atitus            #+#    #+#             */
/*   Updated: 2019/05/31 09:10:13 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int sign;
	int i;
	int res;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
		while (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - 48);
			i++;
		}
		return (sign * res);
}	
