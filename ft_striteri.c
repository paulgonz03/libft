#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    
    i = 0;
    if (s && f)
    {
        while (s[i])
        {
            f(i, &s[i]);
            i++;
        }
    }
}

// void ft_paula(unsigned int i, char *s)
// {
//     i = 0;
//     printf("%d\n", s[i]);
// }

// int main()
// {
//     char s[] = "hola que tal";
//     ft_striteri(s, ft_paula);
//     printf("%s", s);
// }