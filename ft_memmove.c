#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	d = dest;
	s = src;
	i = 0
	if (dest == '\0' && src == '\0')
		return (0);
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else 
	{
		i = n 
		while (!src)
		{
			d[i] = src[i]
		}
	}	
}

int main()
{
	
}
