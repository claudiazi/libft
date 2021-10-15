#include "libft.h"
int	ft_atoi(const char *str)
{
	int			is_neg;
	long long	res;

	res = 0;
	is_neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		is_neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			break ;
		else
			res = (res * 10) + *str - '0';
		str++;
	}
	return (res * is_neg);
}
