#include "libft.h"

int	ft_ascii(int c)
{
	if (c >= 0 && c <= 127)
		return(1);
	return(0);
}

// int	main()
// {
// 	int a = 'a';
// 	int b = '7';
// 	int c = ')';

// 	printf("%d\n", ft_ascii(a));
// 	printf("%d\n", ft_ascii(b));
// 	printf("%d", ft_ascii(c));
// }
