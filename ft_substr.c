#include "libft.h"
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*str;
	int		i;

	i = 0;
	if (start > ft_strlen(s) - 1)
	{
		if (!(str = malloc((sizeof(char)))))
       		return NULL;
		*str = '\0';
		return (str);
	}
    if (!(str = malloc((len + 1) * sizeof(char))))
        return NULL;
	s = s + start;
	while (i < (int)len && *s)
	{
		*str = *s;
		str++;
		s++;
		i++;
	}
	*str = '\0';
    return (str - len);
}
