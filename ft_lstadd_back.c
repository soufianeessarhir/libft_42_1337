/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:42:43 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/09 03:11:45 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if(!*lst && new)
	{
		(*lst) = new;
		return ;
	}
	if(!new || !*lst)
		return ;
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
int main()
{
	t_list *lst = NULL;
	// lst = ft_lstnew("0");
	// lst->next = ft_lstnew("1");
	// lst->next->next = ft_lstnew("2");
	t_list *new = ft_lstnew("3");
	
	ft_lstadd_back(&lst,new);

	while(lst != NULL)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}

	
}