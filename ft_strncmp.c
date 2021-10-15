#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
/*compare strings then it compares both the strings character by character till n(if n <= length of smallest string) or till null character of smallest string
 */
{
	while (n-- && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}
