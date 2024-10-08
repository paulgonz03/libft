#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (f == NULL)
        return ;
    if (lst != NULL && f != NULL)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}