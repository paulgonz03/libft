#include "libft.h"


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return(0);
	while(i < n)
	{
		if(p1[i] != p2[i])
			break;
		i++;
	}
	return((unsigned char)p1[i] - (unsigned char)p2[i]);
}

// int main()
// {
// 	char s1[] = "paula";
// 	char s2[] = "paulj";	
// 	char s3[] = "paula";
// 	char s4[] = "paulj";
// 	printf("%d\n", ft_memcmp(s1, s2, 5));
// 	printf("%d", memcmp(s3, s4, 5));
// }
