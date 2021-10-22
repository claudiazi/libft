#include "libft.h"
char	*ft_strdup(const char *s1)
{
/*callocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.*/
	char	*s2;
	size_t	len_s1;
	size_t	i;

	i = 0;
	if (!*s1)
		return (0);
	len_s1 = ft_strlen(s1);
	s2 = malloc((len_s1 + 1) * sizeof(char));
	if (!s2)
		return (0);
	while (i < len_s1)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
