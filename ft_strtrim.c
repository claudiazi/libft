#include "libft.h"
static int	is_in_str(char const c, char const *set)
{
	size_t	len_set;

	len_set = ft_strlen(set);
	while (len_set--)
	{
		if (c == set[len_set])
			return (1);
	}
	return (0);
}

static char	*trim_char(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	len_s1;

	start = 0;
	end = 0;
	i = 0;
	len_s1 = ft_strlen(s1);
	while (is_in_str(s1[start], set) == 1 && s1[start] != '\0')
		start++;
	while (is_in_str(s1[len_s1 - end - 1], set) == 1 && start + end < len_s1)
		end++;
	str = malloc((len_s1 - start - end + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (i < len_s1 - start - end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	str = trim_char(s1, set);
	if (str == 0)
		return (0);
	return (str);
}
