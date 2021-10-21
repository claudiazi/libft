#include "test_libft.h"
void	test_ft_strtrim()
{
/* test1 */
	if (strcmp(ft_strtrim("abchugbabc", "abc"), "hugb") == 0)
        printf("%s", "ft_strtrim: Correct! \n");
    else
        printf("%s", "ft_strtrim: Wrong! \n");
}