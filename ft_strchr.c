/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:40:59 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 11:26:59 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&tmp[i]);
		i++;
	}
	if (c == 0)
		return (&tmp[i]);
	return (NULL);
}
