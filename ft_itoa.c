/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:53:44 by scraeyme          #+#    #+#             */
/*   Updated: 2024/09/08 20:09:54 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;
	int		tmp;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		tmp = -n;
	else
		tmp = n;
	while (tmp > 0)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

static char	*rev_str(char *str)
{
	int		i;
	char	tmp;
	int		size;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	res = (char *)malloc(sizeof(char) * (int)ft_intlen(n) + 1);
	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	if (n == 0)
		res[i++] = '0';
	while (n > 0)
	{
		res[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	if (neg)
		res[i++] = '-';
	res[i] = '\0';
	res = rev_str(res);
	return (res);
}
