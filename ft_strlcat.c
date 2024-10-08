#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst,const char *src, size_t n)
{
	size_t i;
	size_t j;
	int lensrc;
	size_t f;

	i = 0;
	j = 0;
	lensrc = ft_strlen(src);
	if (n == 0)
		return (lensrc);
	while (dst[j] && j < n)  
		j++;
	f = j;
	while (src[i] && i < n - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (f < n)
		dst[j] = '\0';
	return (ft_strlen(src) + f);
}

// int	main()
// {
// 	// char *dst = NULL;
// 	// char src[] = "hola";
// 	char *dst1 = NULL;
// 	char src1[] = "hola";

// 	// printf("%ld\n", ft_strlcat(dst, src, 4));
// 	printf("%ld\n", strlcat(dst1, src1, 4));
// 	// printf("%s\n", dst);
// 	printf("%s", dst1);
// }
