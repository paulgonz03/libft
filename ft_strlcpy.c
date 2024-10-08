#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"


int	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 	char dst[10] = "jote";
// 	char src[] = "hola que tal";
// 	printf("%d\n", ft_strlcpy(dst, src, 3));	
// 	// printf("%zu", strlcpy(dst, src , 3));
// }
