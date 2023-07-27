#include "push_swap.h"

void	*free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

int	get_nb_word(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == c && i != 0 && s[i - 1] != c)
			len++;
		i++;
	}
	if (i != 0 && s[i - 1] != c)
		len++;
	return (len);
}

char	*take_word(const char *s, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		word[j] = s[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**test_protect(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc((sizeof(char *) * (get_nb_word((char *)s, c) + 1)));
	if (!tab)
		return (NULL);
	return (tab);
}

char	**ft_split(char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	tab = test_protect(s, c);
	if (!tab)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		tab[j] = take_word(&s[i], c);
		if (!tab[j])
			return (free_tab(tab));
		while (s[i] != c && s[i])
			i++;
		while (s[i] && s[i] == c)
			i++;
		j++;
	}
	tab[get_nb_word((char *)s, c)] = NULL;
	return (tab);
}