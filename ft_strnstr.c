#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	int j;

	i = 0;
	j = 0;
	char *str;
	str = (char *)big;
	if (little[j] == '\0')
		return(str);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while(little[j] != '\0' && big[i + j] == little[j])
			j++;
		if(little[j] == '\0')
			return(str + i);
		i++;
	}
	return(0);
}

int main()
{
	char big[] = "hola soy paula";
	char little[] = "j";
	printf("%s", ft_strnstr(big, little, 7));
}
