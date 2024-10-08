#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int i = 0;

	while (src[i])
	{
		if (src[i] == c)
			return((char *)&src[i]);
		i++;
	}
	return(NULL);
}

// int	main()
// {
// 	char src[] = "Hola que tal";
// 	int c = 'a';
// 	printf("%s\n", ft_strchr(src, c));
// 	printf("%s", strchr(src, c));
// }
