#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
/* The string created from the successive applications of ’f’.  Returns NULL if the allocation fails. */
{
	char *str;
	int i;
	size_t len_s;

	i = 0;
	if (!s || !f)
		return (0);
	len_s = ft_strlen(s);
	str = (char *)malloc((len_s + 1) * sizeof (char));
	if (str == 0)
		return (0);
	while (len_s--)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
