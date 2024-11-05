
#include "libft.h"

long int	my_atol(const char *nptr)
{
	int			sign;
	long int	n;
	int			i;

	sign = 1;
	n = 0;
	i = 0;
	while ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		n = n * 10 + nptr[i] - '0';
		i++;
	}
	return (n * sign);
}
