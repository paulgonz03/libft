#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return(1);
	return(0);
}

// int	main()
// {
// 	int c = 3;
// 	int a = 'L';
// 	int b = 'a';
// 	int d = 10;

// 	printf("%d\n", ft_isdigit(c));
// 	printf("%d\n", ft_isdigit(a));
// 	printf("%d\n", ft_isdigit(b));
// 	printf("%d", ft_isdigit(d));
// }
