#include "libft.h"
void	*ft_memmove(void	*restrict dst, const void	*restrict src, size_t n)
/*num bytes of the data with source as the starting address are moved to the data with destination as the starting address to support the overlap of DeST and src. The function returns the dest pointer.
 */
{
	char	*pdst;
	char	*psrc;

	pdst = (char *) dst;
	psrc = (char *) src;
	if (!dst && !src)
		return (0);
	if (pdst < psrc)
	{
		while (n--)
			*pdst++ = *psrc++;
	}
	else
	{
		pdst = pdst + n - 1;
		psrc = psrc + n - 1;
		while (n--)
		{
			*pdst-- = *psrc--;
		}
	}
	return (dst);
}
