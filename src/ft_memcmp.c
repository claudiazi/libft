#include "../libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
/* compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
 */
{
	if (n == 0)
		return (0);
	while (n-- &&  *(unsigned char *)s1 != '\0')
	{
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return (1);
		if (*(unsigned char *)s1 < *(unsigned char *)s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}
