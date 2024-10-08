#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
    write (fd, "\n", 1);
}

// int main()
// {
//     char s[] = "hola que tal";
//     int fd = open("paulaa.txt", O_WRONLY);
//     ft_putendl_fd(s, fd);
// }