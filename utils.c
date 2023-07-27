#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

long int	ft_atol(char *str)
{
	long int	res;
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

int	*trans_to_int(char **argv, int len_tab)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * len_tab);
	if (!tab)
		return (exit(1), NULL);
	i = 0;
	while (argv[i])
	{
		tab[i] = ft_atol(argv[i]);
		i++;
	}
	return (tab);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!res)
		return (write(1, "NOT ENOUGH MEMORY\n", 18), free(s1), exit(1), NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i])
		res[j++] = s1[i++];
	i = 0;
	if (s1)
		res[j++] = ' ';
	while (s2 && s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	free(s1);
	return (res);
}