#include "libft.h"
char *ft_strchr(const char *s, int c)
/* locates the first occurrence of c (converted to a char) in the string pointed to by s.  */
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
			return ((char *)s);
	return(0);
}
