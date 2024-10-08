#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *d;
	const unsigned char *s;

	d = dest;
	s = src;
	i = 0;
	if (d == NULL && s == NULL)
		return (0);
	if (d <= s)
		ft_memcpy(dest, src, n);
	else 
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	d[n] = '\0'; 
	return (d);
}

// int main()
// {
// 	char *src = "adios";
// 	char *dest = "hola que tal";
// 	printf("A: %p\n", ft_memmove(dest, src, 7));
// 	printf("B: %p\n", memmove(dest, src, 7));
// }
