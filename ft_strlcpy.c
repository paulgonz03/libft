/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulgonz <paulgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:13:14 by paulgonz          #+#    #+#             */
/*   Updated: 2024/10/10 20:55:20 by paulgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	int		lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	if (n == 0)
		return (lensrc);
	while (src[i] && i < (n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}

// int main()
// {
// 	char dst[10] = "jote";
// 	char src[] = "hola que tal";
// 	printf("%d\n", ft_strlcpy(dst, src, 3));
// 	// printf("%zu", strlcpy(dst, src , 3));
// }
