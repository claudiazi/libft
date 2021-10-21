#include "libft.h"
char *ft_strrchr(const char *s, int c)
/*it locates the last occurrence of c. */
{
	size_t	len_s;

	len_s = ft_strlen(s);
	s = s + len_s - 1;
	while (len_s--)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return(0);
}
