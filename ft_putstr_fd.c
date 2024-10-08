#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
}

// int main()
// {
//     char s[] = "hola que tal";
//     int fd = 2;
//     ft_putstr_fd(s, fd);
// }