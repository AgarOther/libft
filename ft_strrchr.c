/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:40:59 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 11:28:59 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&tmp[i]);
		i--;
	}
	if (c == 0)
		return (&tmp[ft_strlen(s) - 1]);
	return (NULL);
}
