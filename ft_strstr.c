#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	len;
	if (*needle == '\0')
		return ((char *)haystack);
	if (!needle)
		return ((char *)haystack);
	len = ft_strlen(needle);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
