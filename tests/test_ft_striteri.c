#include "../libft.h"
#include <string.h>
static void	iter(unsigned int i, char *c)
{
	*c += i;
}

int		main()
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * 6);
	strcpy(str, "abcde");
	ft_striteri(str, &iter);
	printf("final result: %s", str);
	return (0);
}