/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:37:12 by scraeyme          #+#    #+#             */
/*   Updated: 2024/10/11 15:11:34 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*subcat(char *str, char const *s, unsigned int start, size_t k)
{
	int	i;

	i = 0;
	while (s[start] && start < k)
	{
		str[i] = (char) s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

size_t	get_k(char *s, size_t i, size_t k, size_t len)
{
	while (s[i] && k < len)
	{
		i++;
		k++;
	}
	return (k);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	k;

	i = start;
	k = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	k = get_k((char *)s, i, k, len);
	str = malloc(k + 1);
	if (!str)
		return (NULL);
	k += start;
	str = subcat(str, s, start, k);
	return (str);
}
