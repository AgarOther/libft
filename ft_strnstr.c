/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:40:07 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 12:13:01 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	char	*str;

	i = 0;
	j = 0;
	little_len = ft_strlen(little) - 1;
	str = (char *)big;
	while (big[i] && j < little_len && i < len)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (j < little_len)
		return (NULL);
	return (&str[i - j]);
}
