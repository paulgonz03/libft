#include "libft.h"

void *ft_memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	d = dest;
	s = src;
	i = 0;
	if (!dest && !src)
		return (0);
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(d);
}

// int main()
// {
// 	char dest[] = "hola";
// 	char src[] = "pau";
// 	printf("%p\n", memcpy(dest, src, 2));
// 	printf("%p\n", ft_memcpy(dest, src, 2));
// }
