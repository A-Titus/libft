/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:21:12 by atitus            #+#    #+#             */
/*   Updated: 2019/06/04 14:21:20 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int				i;
	int				j;
	int				k;
	char			**tab;

	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_countwords(s, c)) + 1);
	if (tab == NULL)
		return (NULL);

		while (s[i])
		{
			while (s[i] == c)
				i++;
			j = i;
			while (s[i] && s[i] != c)
				i++;
			if (i > j)
			{
				tab[k] = ft_strndup(s + j, i - j);
				k++;
			}
		}
		tab[k] = NULL;
		return (tab);
}

