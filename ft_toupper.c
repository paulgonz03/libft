#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return(c);
}

// int	main()
// {
// 	int a = 's';
// 	int b = 'A';
// 	int c = '7';

// 	printf("%c\n", ft_toupper(a));
// 	printf("%c\n", ft_toupper(b));
// 	printf("%c\n", ft_toupper(c));
// 	printf("%c\n", toupper(a));
// 	printf("%c\n", toupper(b));
// 	printf("%c", toupper(c));
// }
