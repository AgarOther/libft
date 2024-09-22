/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:17:06 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 15:29:29 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	memsize;

	if (nmemb == 0 || size == 0)
	{
		result = malloc(1);
		if (result)
			ft_bzero(result, 1);
		return (result);
	}
	memsize = nmemb * size;
	result = malloc(memsize);
	if (!result)
		return (NULL);
	ft_bzero(result, memsize);
	return (result);
}
