#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char * p;
    int i;

    i = 0;
    p = malloc(ft_strlen(s) * sizeof(char));
    if (!p)
        return(0);
    if (s && f)
    {
        while(s[i] != '\0')
        {
            f(i, s[i]);
            i++;
        } 
    }
    return(p);
    }

// char ft_paulgonz(unsigned int i, char d)
// {
//     char m;
//     i = 1;

//     m = d + i;
//     return(printf("%c", m)); 
// }

// int main()
// {
//     char s[] = "paula";
//     ft_strmapi(s ,ft_paulgonz);
// }