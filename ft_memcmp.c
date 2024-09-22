/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:36:00 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/07 12:38:13 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*tmp_s1;
	char	*tmp_s2;

	i = 0;
	tmp_s1 = (char *)s1;
	tmp_s2 = (char *)s2;
	while (tmp_s1[i] == tmp_s2[i] && tmp_s1[i] && i < n)
		i++;
	return (tmp_s1[i] - tmp_s2[i]);
}
