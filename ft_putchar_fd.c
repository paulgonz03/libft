#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// int main()
// {
//     char c = 'h';
//     int fd =  2;
//     ft_putchar_fd(c, fd);
// }