/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:41:02 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 12:48:53 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (tmp[i] && i < n)
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	if (c == 0)
		return (&tmp[i]);
	return (NULL);
}
