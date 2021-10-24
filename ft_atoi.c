#include "libft.h"
#include "limits.h"
int	ft_atoi(const char *str)
{
	int		is_neg;
	unsigned long	res;

	res = 0;
	is_neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		is_neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str != '\0' && ft_isdigit(*str))
	{
		if (((res * 10) + *str - '0') > LONG_MAX && is_neg == 1)
			return (-1);
		if (((res * 10) + *str - '0') > LONG_MAX && is_neg == -1)
			return (0);
		res = (res * 10) + *str - '0';
		str++;
	}
	return (res * is_neg);
}
