#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *p;

	p = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		if(p[i] == c)
			return(p + i);
		i++;
	}
	return(0);
}

// int main()
// {
// 	char s[] = "paulgonz";
// 	int c = 'g';
// 	char s1[] = "paulgonz";
// 	int c1 = 'g';
// 	printf("%s\n", (char *)ft_memchr(s, c, 6));
// 	printf("%s", (char *)memchr(s1, c1, 6));
// }