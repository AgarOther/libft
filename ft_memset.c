/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:31:43 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 12:34:23 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}
