#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
/*contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated
     memory is filled with bytes of value zero. */
	void	*p;
	if (!(p = malloc(count * size)))
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
