#include "libft.h"
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
/*copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0, returns the length of src */
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (dstsize != 0)
	{
		while (dstsize-- && *src != '\0' && dstsize > 0)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (srcsize);
}
