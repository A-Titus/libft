#include "libft.h"

size_t	ft_countwords(const char *s, char c)
{
	size_t i;
	size_t word;

	i = 0;
	word = 0;
	while(s[i])
	{
		if (s[i] != c)
		word++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (word);
}
