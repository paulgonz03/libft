#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;
	unsigned int i;
	size_t j;

	j = 0;
	i = start;
	p = malloc(len *sizeof(char));
	if(!p)
		return (0);
	if (!s[i])
		return (0);
	if (s[i])
	{
		if (start > (unsigned)ft_strlen(s))
			return (0);
		while (j < len )
		{
			p[j] = s[i];
			i++;
			j++;
		}
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
// 	char s[] = "hola que tal";
// 	unsigned int start = 5;
// 	printf("%s", ft_substr(s, start, 7));
// }
