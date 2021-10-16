#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <xlocale.h>
#include <stdlib.h>
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

	if (ft_toupper('a') == toupper('a') && ft_toupper('A') == toupper('A') && ft_toupper('.') == toupper('.'))
		printf("%s", "ft_toupper: Correct! \n");
	else
		printf("%s", "ft_toupper: Wrong! \n");

	if (ft_tolower('a') == tolower('a') && ft_tolower('A') == tolower('A') && ft_tolower('.') == tolower('.'))
		printf("%s", "ft_tolower: Correct! \n");
	else
		printf("%s", "ft_tolower: Wrong! \n");

	if(ft_strchr("abcd", 'b') == strchr("abcd", 'b') && ft_strchr("abcd", 'm') == strchr("abcd", 'm') && ft_strchr("abcd", '\0') == strchr("abcd", '\0'))
		printf("%s", "ft_strchr: Correct! \n");
	else
		printf("%s", "ft_strchr: Wrong! \n");

	if(ft_strrchr("abcd", 'b') == strrchr("abcd", 'b') && ft_strrchr("abcd", 'm') == strrchr("abcd", 'm') && ft_strrchr("abcd", '\0') == strrchr("abcd", '\0'))
		printf("%s", "ft_strrchr: Correct! \n");
	else
		printf("%s", "ft_strrchr: Wrong! \n");

	if(ft_strncmp("abcd", "abmd", 3) == strncmp("abcd", "abmd", 3) && ft_strncmp("abcd", "abmd", 5) == strncmp("abcd", "abmd", 5) && ft_strncmp("abcd", "", 5) == strncmp("abcd", "", 5) && ft_strncmp("", "abcd", 5) == strncmp("", "abcd", 5))
		printf("%s", "ft_strncmp: Correct! \n");
	else
		printf("%s", "ft_strncmp: Wrong! \n");

	if(ft_memchr("abcd", 'b', 3) == memchr("abcd", 'b', 3) && ft_memchr("abcd", 'b', 1) == memchr("abcd", 'b', 1) && ft_memchr("abcd", '\0', 3) == memchr("abcd", '\0', 3))
		printf("%s", "ft_memchr: Correct! \n");
	else
		printf("%s", "ft_memchr: Wrong! \n");

	if(ft_memcmp("abcd", "abcd", 4) == memcmp("abcd", "abcd", 4) && ft_memcmp("abcd", "abcegdsd", 5) == memcmp("abcd", "abcegdsd", 5) && ft_memcmp("", "", 0) == memcmp("", "", 0))
		printf("%s", "ft_memcmp: Correct! \n");
	else
		printf("%s", "ft_memcmp: Wrong! \n");

	if(ft_strnstr("aabcdfs", "abc", 5) == strnstr("aabcdfs", "abc", 5) && ft_strnstr("aabcdfs", "", 5) == strnstr("aabcdfs", "", 5) && ft_strnstr("aabcdfs", "acd", 5) == strnstr("aabcdfs", "acd", 5))
		printf("%s", "ft_strnstr: Correct! \n");
	else
		printf("%s", "ft_strnstr: Wrong! \n");

	if (ft_atoi(" 	+1234") == atoi(" 	+1234") && ft_atoi(" 	+-1234") == atoi(" 	+-1234") && ft_atoi(" 	-1234") == atoi(" 	-1234") && ft_atoi(" 	-abd") == atoi(" 	-abc"))
		printf("%s", "ft_atoi: Correct! \n");
	else
		printf("%s", "ft_atoi: Wrong! \n");

	if (memcmp(ft_calloc(5,4), calloc(5,4), 20) == 0)
		printf("%s", "ft_calloc: Correct! \n");
	else
		printf("%s", "ft_calloc: Wrong! \n");
	
	if (strcmp(ft_strdup("abcd"), strdup("abcd")) == 0)
		printf("%s", "ft_strdup: Correct! \n");
	else
		printf("%s", "ft_strdup: Wrong! \n");
	
	if (strcmp(ft_substr("sdhrbch", 3, 3), "rbc"))
        printf("%s", "ft_substr: Correct! \n");
    else
        printf("%s", "ft_substr: Wrong! \n");

	// char test_str[26] = "lorem ipsum dolor sit amet";
	// printf("1: %s\n", ft_substr(test_str, 0 ,10));
	// printf("2: %s", ft_substr(test_str, 7 ,10));
	// printf("3: %s", ft_substr(test_str, 7 ,0));
	// printf("4: %s", ft_substr(test_str, 0 ,0));
	// printf("5: %s", ft_substr(test_str, 400 ,20));


	printf("%s", ft_strjoin("abcgd", "hsdbd"));
	


	return (0);
}