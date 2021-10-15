#include "libft.h"
char	*ft_strdup(const char *s1)
{
/*callocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.*/
	char	*s2;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	if (!(s2 = malloc(len_s1 * sizeof(char))))
		return (NULL);
	while (len_s1--)
		s2[len_s1] = s1[len_s1];
	return (s2);
}
