#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;

	if (src >= dest)
		ft_memcpy(dest, src, n);
	else 
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*((unsigned char *) dest + i) = *((unsigned const char *) src + i);
			i--;
		}
	}
	return (dest);
}

int main()
{
	char *src = "adios";
	char *dest = "hola que tal";
	printf("A: %p\n", ft_memmove(dest, src, 7));
	printf("B: %p\n", memmove(dest, src, 7));
}