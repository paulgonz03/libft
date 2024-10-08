#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *list = *lst;

    while (list != NULL && del != NULL)
    {
        list = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = list;
    }
    *lst = NULL;
}