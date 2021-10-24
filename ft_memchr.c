#include "libft.h"
void * ft_memchr(const void *s, int c, size_t n)
/* locates the first occurrence of c (converted to an unsigned char) in string s
 */
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}
