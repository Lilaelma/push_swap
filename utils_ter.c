#include "push_swap.h"

int	ft_len_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	res;
	int			sign;
	int			i;

	i = 0;
	res = 0;
	sign = 1;
	if (!str)
		exit(write(2, "Error\n", 6));
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] < '0' || '9' < str[i + 1])
			return (2147483648);
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return (sign * res);
}
