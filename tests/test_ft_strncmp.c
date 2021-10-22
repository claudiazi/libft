#include "../libft.h"
#include <string.h>
int main()
{
	printf("%d", ft_strncmp("test\200", "test\0", 6));
	printf("%d", strncmp("test\200", "test\0", 6));
}