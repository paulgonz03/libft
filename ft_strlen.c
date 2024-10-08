#include "libft.h"

int	ft_strlen(const char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

// int	main()
// {
// 	char	str[] = "hola que tal";
// 	printf("%d", ft_strlen(str));
// }
