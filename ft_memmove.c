/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:09:43 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 11:21:18 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp_src;
	char		*tmp_dest;
	size_t		i;

	i = 0;
	tmp_src = (char *) src;
	tmp_dest = (char *) dest;
	if (dest < src)
	{
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			tmp_dest[n] = tmp_src[n];
			n--;
		}
		tmp_dest[n] = tmp_src[n];
	}
	return (dest);
}
