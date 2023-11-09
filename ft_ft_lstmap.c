/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:17:07 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/09 03:30:36 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*frst;
	t_list	*s;

	if (!lst || !f || !del)
		return (NULL);
	frst = lst;
	while (lst)
	{
		s = ft_lstnew(lst->content);
		if (!s)
		{
			ft_lstdelone(s,del);
			return (NULL);
		}
		lst = lst->next;
	}
	frst = s;
	return (s);
}
