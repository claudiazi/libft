#include "libft.h"
static char *ft_malloc_str(int n)
{
	int sign;
	int len;
	int nbr;
	char *str;

	sign = (n >= 0) ? 1 : -1;
	len = (n >= 0) ? 1 : 2;
	nbr = n * sign;
	while (nbr /= 10)
		len++;
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	if (sign == -1)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}

static	char *ft_convert_min_int()
{
	char *str;
	char *min_int;
	int i;

	i = 0;
	min_int = "-2147483648";
	if (!(str = (char *) malloc(12 * sizeof(char))))
		return (0);
	while (i < 11)
	{
		str[i] = min_int[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
/*The string representing the integer.  NULL if the allocation fails. */
{
	char	*str;
	int	i;
	int	pow;
	int nbr;

	str = ft_malloc_str(n);
	if (str == NULL)
		return(0);
	if (n == -2147483648)
		return (ft_convert_min_int());
	i = (n >= 0) ? 0 : 1;
	n = (n >= 0) ? n : -n;
	nbr = n;
	pow = 1;
	while (n /= 10)
		pow = pow * 10;
	while (pow > 0)
	{
		str[i++] = ((nbr / pow) % 10) + '0';
		pow = pow / 10;
	}
	return (str);
}
