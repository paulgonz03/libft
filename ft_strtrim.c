#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *p;
	int i;
	int j;
	
	j= 0;
	i = 0;
	p = malloc(ft_strlen(s1) + 1 * sizeof(char));
	if(!p)
		return (0);
	while (s1[i] && s1[i]== set[i])
		i++;
	while (s1[i] && s1[i] != set[i])
	{
		p[j] = s1[i];
		i++;
		j++;
	}
	p[i] = '\0';
	return(p);
}

int main()
{
	char s1[] = "hola que tal";
	char set[] = "que";
	printf("%s\n", ft_strtrim(s1, set));
}
