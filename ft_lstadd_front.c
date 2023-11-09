/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 02:26:24 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/08 16:09:35 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
// int main()
// {

//     t_list *new = ft_lstnew("0");
//     t_list *lst = ft_lstnew("1");
//     lst->next =ft_lstnew("2");
//     lst->next->next = ft_lstnew("3");

//     ft_lstadd_front(&lst,new);

//     while(lst)
//     {
//         printf("%s\n", lst->content);
//       lst = lst->next;
//     }

// }