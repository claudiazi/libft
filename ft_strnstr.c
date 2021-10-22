#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
/* locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a `\0'
     character are not searched.
*/
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (len-- && haystack[i + j] != '\0')
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *) haystack + i);
		}
		j = 0;
		i++;
		while (haystack[i + j] != needle[j] && haystack[i + j] != '\0')
			i++;
	}
	return (0);
}
