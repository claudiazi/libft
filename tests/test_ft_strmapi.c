#include "../libft.h"
#include <string.h>
static char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		printf("%s", "wrong index\n");
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		main()
{
	char	*str;
	char	*strmapi;

	str = (char *)malloc(sizeof(*str) * 12);
	strcpy(str, "LoReM iPsUm");
	strmapi = ft_strmapi(str, &mapi);
	printf("result: %s", strmapi);
	return (0);
}
