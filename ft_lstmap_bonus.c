/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:31:47 by scraeyme          #+#    #+#             */
/*   Updated: 2024/10/11 13:06:08 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*val;

	if (!f || !del || !lst)
		return (NULL);
	new_list = NULL;
	val = NULL;
	while (lst)
	{
		val = ft_lstnew(f(lst->content));
		if (!val)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, val);
		lst = lst->next;
	}
	return (new_list);
}
