#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	size_t i;

	p = s;
	i = 0;
	while(i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// int main()
// {
// 	char s[] = "hola que tal";
// 	char s2[] = "hola que tal";
// 	ft_bzero(s, 13);
// 	bzero(s2, 13);
// 	printf("ft_bzero :%s\n", s);
// 	printf("bzero :%s", s2);
// }
