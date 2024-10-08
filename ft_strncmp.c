#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else 
			break;
	}	
	return((char) s1[i] - (char) s2[i]);
}

// int	main()
// {
// 	char s1[] = "paula";
// 	char s2[] = "pauj";
// 	printf("%d\n", ft_strncmp(s1, s2, 2));
// 	printf("%d", strncmp(s1, s2, 2));
// }
