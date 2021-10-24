#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
/* compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
 */
{
	unsigned char *p_s1;
	unsigned char *p_s2;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p_s1 != *p_s2)
			return (*p_s1 - *p_s2);
		p_s1++;
		p_s2++;
	}
	return (0);
}
