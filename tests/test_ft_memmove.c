#include "../libft.h"
#include <string.h>

int		main()
{
	char	src1[] = "Learningisfun";
	char	src2[] = "Learningisfun";
	char	*dest1;
	char	*dest2;
	char	*dest3;
	char	*dest4;
	char	*dest5;

	char	*dest1_1;
	char	*dest2_1;
	char	*dest3_1;
	char	*dest4_1;
	char	*dest5_1;

	dest1 = src1 + 1;
	dest2 = src1 + 1;
	dest3 = src1 + 1;
	dest4 = src1 + 1;
	dest5 = src1 + 1;

	dest1_1 = src2 + 1;
	dest2_1 = src2 + 1;
	dest3_1 = src2 + 1;
	dest4_1 = src2 + 1;
	dest5_1 = src2 + 1;

	printf("%s\n", ft_memmove(dest1, "right", 5));
	printf("%s\n", memmove(dest1_1, "right", 5));
	printf("%s\n", ft_memmove(dest2, "r\0ig\0ht", 8));
	printf("%s\n", memmove(dest2_1, "r\0ig\0ht", 8));
	printf("%s\n", ft_memmove(dest3, src1, 8));
	printf("%s\n", memmove(dest3_1, src2, 8));
	printf("%s\n", ft_memmove(src1, dest4, 8));
	printf("%s\n", memmove(src2, dest4_1, 8));
	printf("%s\n", ft_memmove(src1, dest5, 0));
	printf("%s\n", memmove(src2, dest5_1, 0));

	return (0);
}