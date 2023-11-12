/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:17:07 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/12 05:22:37 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*frst;
	t_list	*s;
	 
	s = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		frst = ft_lstnew(f(lst->content));
		if (!frst)
		{
			ft_lstdelone(s,del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&s,frst);
		}
	return (s);
}


