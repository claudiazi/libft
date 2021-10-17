#include "libft.h"
static int	delimiter_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			count++;
		i++;
	}
	return (count + 1);
}

static char	**initialize_matrix(char const *s, char c, int count)
{
	char	**matrix;
	int		i;
	int		n;
	int		m;

	i = 0;
	n = 0;
	m = 0;
	if(!(matrix = (char **)malloc(count * sizeof(char *))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (c == s[i] || s[i + 1] == '\0')
		{
			if (!(matrix[m] = (char *)malloc((n + 1) * sizeof(char))))
			{
				free(matrix);
				return (NULL);
			}
			matrix[m][n + 1] = '\0';
			m++;
			n = -1;
		}
		n++;
		i++;
	}
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;
	int		i;
	int		n;
	int		m;

	i = 0;
	n = 0;
	m = 0;
	count = delimiter_count(s, c);
	str = initialize_matrix(s, c, count);
	while (m < count)
	{
		while (s[i] != c && s[i] != '\0')
		{
			str[m][n] = s[i];
			n++;
			i++;
		}
		n = 0;
		m++;
		i++;
	}
	return (str);
}

// int	main()
// {
// 	int		count = 0;
// 	char	**str_split = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
// 	while (count < delimiter_count("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i'))
// 	{
// 		printf("%s\n", str_split[count]);
// 		count++;
// 	}
// }