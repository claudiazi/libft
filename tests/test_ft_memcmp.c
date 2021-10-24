#include "../libft.h"
#include <string.h>
int main()
{
	char	*s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char	*s2 = "\xff\xaa\xde\x02";
	size_t	size = 8;

	printf("%d\n", ft_memcmp(s1, s2, size));
	printf("%d\n", memcmp(s1, s2, size));
	return (0);
}
