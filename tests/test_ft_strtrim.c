#include "../libft.h"
int main()
{
	printf("%s\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));
	printf("%s\n", ft_strtrim(" lorem ipsum dolor sit amet", " l"));
	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "tel"));
	printf("%s\n", ft_strtrim("          ", " "));
	return (0);
}
