#include "libft.h"

int len(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}	
char *ft_itoa(int n)
{
	char *p;
	int aux;
	int nb;

	nb = n;
	aux = len(n);
	p = malloc((aux + 1) *sizeof(char));
	if (!p)
		return (NULL);
	p[aux--] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		p[0] = '-';
	}
	if (!nb)
		p[0] = '\0';
	while (nb > 0)
	{
		p[aux--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (p);
}

int main()
{
	int n = 58745587;
	printf("%s", ft_itoa(n));
}
