#include "libft.h"
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
/*copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0, returns the length of src
 */
{
	size_t len_dst;
	size_t len_src;

	if (!dst && !src)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);

	if (dstsize <= len_dst)
		return (dstsize + len_src);
	dst = dst + len_dst;
	while (dstsize - len_dst - 1 > 0 && *src != '\0' && dstsize--)
		*dst++ = *src++;
	*dst = '\0';
	return (len_dst + len_src);
}
