#include <stdio.h>
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
/*copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0, returns the length of src
 */
{
	size_t srcsize;

	if (!dst && !src)
		return (0);
	srcsize = ft_strlen(src);
	if (dstsize != 0)
	{
		while (dstsize-- && *src != '\0' && dstsize > 0)
			*dst++ = *src++;
	}
	*dst = '\0';
	return (srcsize);
}
