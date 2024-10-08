#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *p;
	int i;
	int j;
	int c;
	int v;

	c = (ft_strlen(s1));
	v = (ft_strlen(s2));
	j = 0;
	i = 0;
	p = malloc((c + v + 1) *sizeof(char));
	if (!p)
		return (0);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
// 	char s1[] = "holaaaa";
// 	char s2[] = "adios";
// 	printf("%s", ft_strjoin(s1, s2));
// }
