/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:10:30 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/08 20:17:56 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*str;

	i = start;
	while (s[i] && s[i] != (char)start)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	j = 0;
	i = start;
	while (s[i] && len > 0)
	{
		str[j] = s[i];
		i++;
		j++;
		len--;
	}
	str[j] = '\0';
	return (str);
}
