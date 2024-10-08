#include "libft.h"

int ft_counterwords(char *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!s[i])
			return (word);
		while (s[i] != c && s[i] != '\0')
			i++;
		word++;
	}
	return(word);
}

int ft_counterletters(char *s, char c, int j)
{
	int i;

	i = 0;
	while (s[j] && s[j] != c)
	{
		j++;
		i++;
	}
	return(i);
}

char **ft_split(char const *s, char c)
{
	char  **p;
	int  words;
	int i;
	int j;
	int k;

	if (s == NULL)
		return (NULL);
	words = ft_counterwords((char *)s, c);
	p = ft_calloc(words + 1 ,sizeof(char *));
	if(!p)
		return(0);
	i = 0;
	j = 0;
	while (words-- != 0)
	{
		while(s[j] && s[j] == c)
			j++;
		p[i] = ft_calloc (ft_counterletters((char *)s, c, j) + 1, sizeof(char));
		k = 0;
		while (s[j] && s[j] != c)
			p[i][k++] = s[j++];
		i++;
	}
	return (p);
}

int main()
{
	char s[] = "hola que tal";
	char c = ' ';
	int i = 0;
	char **p = ft_split(s, c);
	while (p[i])
	{
		printf("p->%s\n", p[i]);
		i++;
	}
}
