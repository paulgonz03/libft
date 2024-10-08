#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char aux;

	if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		write(fd, "1", 1);
		write(fd, "4", 1);
		write(fd, "7", 1);
		write(fd, "4", 1);
		write(fd, "8", 1);
		write(fd, "3", 1);
		write(fd, "6", 1);
		write(fd, "4", 1);
		write(fd, "8", 1);
		return ;
	}
	if (n < 0 && n > -2147483648)
	{
		n = n * (-1);
		write (1, "-", 1);
	}
	if (n > 9)
		ft_putnbr_fd (n / 10, fd);
		
	aux = n % 10 + 48;
	write(1, &aux, 1);
}

// int main()
// {
//     int n = 4;
//     int fd = 2;
//     ft_putnbr_fd(n, fd);
// }