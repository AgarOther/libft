/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:35:43 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 20:11:35 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_strs(char *str, char c)
{
	int	i;
	int	strs;
	int	is_spaced;

	i = 0;
	strs = 0;
	is_spaced = 1;
	while (str[i])
	{
		if (is_spaced && str[i] != c)
		{
			is_spaced = 0;
			strs++;
		}
		else if (!is_spaced && str[i] == c)
			is_spaced = 1;
		i++;
	}
	return (strs);
}

static int	count_char(char *str, char c, int offset)
{
	int	i;
	int	chars;

	i = 0;
	chars = 0;
	while (offset > 0 && str[i])
	{
		if (str[i] == c)
			offset--;
		i++;
	}
	while (str[i] != c && str[i])
	{
		chars++;
		i++;
	}
	return (chars);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		strs;
	char	**tab;

	i = 0;
	k = 0;
	strs = count_strs((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (strs + 1));
	if (!tab)
		return (NULL);
	while (i < strs)
	{
		j = 0;
		tab[i] = (char *)malloc(sizeof(char)
				* (count_char((char *)s, c, i) + 1));
		while (s[k] && s[k] != c)
			tab[i][j++] = s[k++];
		tab[i++][j] = '\0';
		k++;
	}
	return (tab);
}
