/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:48:09 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/09 20:41:36 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	contains_char(char const s1, char const *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strcpy(char *dest, char const *src, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		dest[i] = src[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && contains_char(s1[start], set))
		start++;
	while (s1[end] && contains_char(s1[end], set))
		end--;
	if (start > end)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	str = ft_strcpy(str, s1, start, end);
	return (str);
}
