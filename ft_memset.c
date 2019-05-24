/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:16:36 by atitus            #+#    #+#             */
/*   Updated: 2019/05/24 10:16:40 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*dst;

	if (n == 0)
		return (str);
	dst = (unsigned char *)str;
	while (n--)
	{
		*dst = (unsigned char)c;
		if (n)
			dst++;
	}
	return (str);
}
