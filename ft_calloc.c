#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

// int main()
// {
// 	size_t nmemb = 4;
// 	size_t size = 3;
// 	printf("%p\n", ft_calloc(nmemb, size));
// 	printf("%p\n", calloc(nmemb, size));
// }
