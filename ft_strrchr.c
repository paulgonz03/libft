#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	i--;
	while(i >= 0)
	{
		if (src[i] == c)
			return ((char *)&src[i]);
		i--;
	}
	return(NULL);
}

// int	main()
// {
// 	char src[] = "Paulahjj";
// 	int c = 'a';
// 	printf("%s\n", ft_strrchr(src, c));
// 	printf("%s", strrchr(src, c));
// }
