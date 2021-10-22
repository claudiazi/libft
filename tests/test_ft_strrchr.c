#include "../libft.h"
#include <string.h>
int main()
{
	char str2[] = "";
	printf("%s", ft_strrchr(str2, '\0'));
	printf("%s", strrchr(str2, '\0'));
	printf("%s", ft_strrchr("abcd", 'a'));
	printf("%s", strrchr("abcd", 'a'));
	return (0);
}