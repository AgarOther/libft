/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:46:19 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/02 20:49:57 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	if (s == NULL || n == 0)
		return ;
	c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}
