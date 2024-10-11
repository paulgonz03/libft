/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulgonz <paulgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:06:26 by paulgonz          #+#    #+#             */
/*   Updated: 2024/10/11 16:10:21 by paulgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*dstlst;

	dstlst = NULL;
	if (!f || !lst || !del)
		return (NULL);
	while (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		if (!newlst)
			return (del(newlst->content), ft_lstclear(&newlst, del), NULL);
		ft_lstadd_back(&dstlst, newlst);
		lst = lst->next;
	}
	return (dstlst);
}
