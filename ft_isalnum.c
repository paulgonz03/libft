#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 0 && c <= 9)||((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z')))
		return(1);
	return(0);
}

// int main()
// {
// 	int a = ',';
// 	int b = 'a';
// 	int c = 2;
// 	int d = 'J';

// 	printf("%d\n", ft_isalnum(a));
// 	printf("%d\n", ft_isalnum(b));
// 	printf("%d\n", ft_isalnum(c));
// 	printf("%d", ft_isalnum(d));
// }
