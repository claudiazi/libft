#include "libft.h"
void*	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
/*The memcpy function copies n characters from the source object to the destination object. If copying takes place between objects that overlap, the behavior is undefined.
 */
{
	size_t i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
