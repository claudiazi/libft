#include "../libft.h"
#include <string.h>
int main()
{
	char str[] = "ABCDEFG";
	printf("%s", ft_strnstr(str, str, 7));
	printf("%s", strnstr(str, str, 7));
	return (0);
}