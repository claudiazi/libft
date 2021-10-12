#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_isalpha(int	c);
int	ft_isdigit(int	c);
int	ft_isalnum(int	c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	if (ft_isalpha(28) == isalpha(28) && ft_isalpha(125) == isalpha(125))
		printf("%s", "ft_isalpha: Correct! \n");
	else
		printf("%s", "ft_isalpha: Wrong! \n");
	if (ft_isdigit(71) == isdigit(71) && ft_isdigit(125) == isdigit(125))
		printf("%s", "ft_isdigit: Correct! \n");
	else
		printf("%s", "ft_isdigit: Wrong! \n");
	if (ft_isalnum(71) == isalnum(71) && ft_isalnum(125) == isalnum(125) && ft_isalnum(175) == isalnum(175))
		printf("%s", "ft_isalnum: Correct! \n");
	else
		printf("%s", "ft_isalnum: Wrong! \n");
	if (ft_isascii('a') == isascii('a') && ft_isascii(0) == isascii(0) && ft_isascii(180) == isascii(180))
		printf("%s", "ft_isascii: Correct! \n");
	else
		printf("%s", "ft_isascii: Wrong! \n");
	if (ft_isprint(40) == isprint(40) && ft_isprint('~') == isprint('~') && ft_isprint(177) == isprint(177))
		printf("%s", "ft_isprint: Correct! \n");
	else
		printf("%s", "ft_isprint: Wrong! \n");
	if (ft_strlen("abcd") == strlen("abcd") && ft_strlen("15d") == strlen("15d"))
		printf("%s", "ft_strlen: Correct! \n");
	else
		printf("%s", "ft_strlen: Wrong! \n");

	char str[50] = "GeeksForGeeks is for programming geeks.";
  	if (ft_memset(str + 13, '.', 8*sizeof(char)) == memset(str + 13, '.', 8*sizeof(char)))
		printf("%s", "ft_memset: Correct! \n");
	else
		printf("%s", "ft_memset: Wrong! \n");
	printf("%s", str + 13);
	return (0);
}