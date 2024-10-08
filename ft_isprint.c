#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return(1);
	return(0);
}

// int	main()
// {
// 	int a = 'a';
// 	int b = 0;
// 	int c = '7';

// 	printf("%d\n", ft_isprint(a));
// 	printf("%d\n", ft_isprint(b));
// 	printf("%d", ft_isprint(c));
// }
