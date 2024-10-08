#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *p;
	size_t i;

	p = s;
	i = 0;
	while(i < n)
	{
		p[i] = c;
		i++;
	}
	return(s);
}

// int main()
// {
// 	char s[] = "hola que tal";
// 	int c = 'c';
// 	printf ("%p\n", memset(s, c, 9));
// 	printf ("%p", ft_memset(s, c, 9));
// 	return(0);
// }