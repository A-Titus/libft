
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int i;
	char *s;

	i = 0;

	s = str;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return((unsigned char *)s);
}
int main(void)
{
	char *str = "helloworld";
	char * a = ft_memset(str,'@',5);
	printf("%s",a);
	return 0;
}
