#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int main()
// {
// 	int a = '(';
// 	int b = 'a';
// 	int c = 'B';

// 	printf("%c\n", ft_tolower(a));
// 	printf("%c\n", ft_tolower(b));
// 	printf("%c\n", ft_tolower(c));
// 	printf("%c\n", tolower(a));
// 	printf("%c\n", tolower(b));
// 	printf("%c\n", tolower(c));
// }