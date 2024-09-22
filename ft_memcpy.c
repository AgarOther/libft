/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:53:54 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 11:19:23 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tmp_src;
	char		*tmp_dest;
	size_t		i;

	tmp_src = (char *) src;
	tmp_dest = (char *) dest;
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
