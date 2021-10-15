#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
/* locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a `\0'
     character are not searched.
*/
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (len-- && haystack[i + j] != '\0')
	{
		while (haystack[i + j] == needle[j])
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





//{
//	int	i;
//	size_t	len_needle;
//
//	if (0 == (needle_len = strnlen(needle, len)))
//		return (char *)haystack;
//
//	for (i=0; i<=(int)(len-needle_len); i++)
//	{
//		if ((haystack[0] == needle[0]) &&
//			(0 == strncmp(haystack, needle, needle_len)))
//			return (char *)haystack;
//
//		haystack++;
//	}
//	return (0);
//}
