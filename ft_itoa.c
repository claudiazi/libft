#include "libft.h"
char	*ft_itoa(int n)
/*The string representing the integer.  NULL if the allocation fails. */
{
	int	len;
	int	nbr;
	char	*str;
	int	i;
	int	pow;
	int	sign;

	nbr = (n > 0) ? n : -n;
	len = (n > 0) ? 1 : 2;
	sign = (n > 0) ? 1 : -1;
	pow = 10;
	i = 0;
	while (n /= 10)
	{
		len++;
		pow = pow * 10;
	}
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (nbr * sign < 0)
		str[i++] = '-';
	while (pow /= 10)
		str[i++] = ((nbr / pow) % 10) + '0';
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	printf("final result: %s", ft_itoa(-158));
	return (0);
}

//#TODO: MIN_INT & MAX_INT