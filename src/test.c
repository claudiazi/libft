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
void	ft_bzero(void *s, size_t n);
void*	ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void*	ft_memmove(void *restrict dst, const void *restrict src, size_t n);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);


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
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	if (ft_memset(str + 13, '.', 8*sizeof(char)) == memset(str + 13, '.', 8*sizeof(char)))
		printf("%s", "ft_memset: Correct! \n");
	else
		printf("%s", "ft_memset: Wrong! \n");
	ft_bzero(str + 5, 6);
	bzero(str2 + 5, 6);
	if (strcmp(str,str2) == 0)
		printf("%s", "ft_bzero: Correct! \n");
	else
		printf("%s", "ft_bzero: Wrong! \n");
	const char src[50] = "howareyouimfinethankyou";
	char dest[50] = "Heloooo!!";
	char dest2[50] = "Heloooo!!";
	ft_memcpy(dest, src, strlen(src)+1);
	memcpy(dest2, src, strlen(src)+1);
	if (strcmp(dest,dest2) == 0)
		printf("%s", "ft_memcpy: Correct! \n");
	else
		printf("%s", "ft_memcpy: Wrong! \n");
	char str3[50] = "I am going from Delhi to Gorakhpur";
	char str4[50] = "I am going from Delhi to Gorakhpur";
	ft_memmove(str3 + 11, str3 + 5, 29);
	memmove(str4 + 11, str4 + 5, 29);
	if (strcmp(str3,str4) == 0)
		printf("%s", "ft_memmove: Correct! \n");
	else
		printf("%s", "ft_memmove: Wrong! \n");

	const char src3[50] = "howareyouimfinethankyou";
	char dest3[50] = "Heloooo!!";
	char dest4[50] = "Heloooo!!";
	if (ft_strlcpy(dest3, src3, 5) == strlcpy(dest4, src3, 5) && strcmp(dest3, dest4) == 0)
		printf("%s", "ft_strlcpy: Correct! \n");
	else
		printf("%s", "ft_strlcpy: Wrong! \n");
	const char src5[50] = "howareyouimfinethankyou";
	char dest5[50] = "Heloooo!!";
	char dest6[50] = "Heloooo!!";
	if (ft_strlcat(dest5, src5, 10) == strlcat(dest6, src5, 10) && strcmp(dest5, dest6) == 0)
		printf("%s", "ft_strlcat: Correct! \n");
	else
		printf("%s", "ft_strlcat: Wrong! \n");
	return (0);
}