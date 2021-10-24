#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
/*Allocates (with malloc(3)) and returns a substring from the string ’s’. 
The substring begins at index ’start’ and is ofmaximum size ’len’. */
{
	char	*str;
	size_t 	len_s;

	len_s = len;
	if (!s)
		return (0);
	if (start > ft_strlen(s) - 1)
	{
		if (!(str = malloc((sizeof(char)))))
       		return (0);
		*str = '\0';
		return (str);
	}
    if (!(str = malloc((len + 1) * sizeof(char))))
        return (0);
	s = s + start;
	while (len_s-- && *s)
	{
		*str = *s;
		str++;
		s++;
	}
	*str = '\0';
    return (str - len);
}
