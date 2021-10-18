#include "libft.h"
static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	*ft_create_word(char const *s, char c)
{
	char	*word;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	word = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_nfree(char **dst, int n)
{
	while (n > 0)
	{
		n--;
		free(dst[n]);
	}
	free(dst);
}

static int	ft_create_array(char **dst, char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			dst[n] = ft_create_word(s, c);
			if (!dst[n])
			{
				ft_nfree(dst, n);
				return (-1);
			}
			n++;
		}
		while (s[i] != c && s[i] != '\0')
			s++;
		while (s[i] == c && s[i] != '\0')
			s++;
	}
	dst[n] = NULL;
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	word_count;

	if (!s)
		return (0);
	word_count = ft_count_word(s, c);
	dst = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (dst == 0)
		return (0);
	if (ft_create_array(dst, s, c) == -1)
		return (0);
	return (dst);
}
