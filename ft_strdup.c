#include "libft.h"

char *ft_strdup(const char *s)
{
	int i;
	char *p;
	int j;
	
	j = 0;
	i = (ft_strlen(s));
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s[j])
	{
		p[j] = s[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

// int main()
// {
// 	char s[] = "hola que tal";
// 	printf("%s\n", ft_strdup(s));
// 	printf("%s", strdup(s));
// }
