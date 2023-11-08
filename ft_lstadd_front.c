/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 02:26:24 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/07 03:18:52 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *head;
    head = malloc(sizeof(t_list));
    if(!head)
        return NULL;
    head->content = content;
    head->next = NULL;
    return (head);
}
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(lst && new)
    {
        new->next = *lst;
        *lst = new;
    }
}

int main()
{

    
    t_list *new = ft_lstnew("0");
    
    t_list *lst = ft_lstnew("1");
    lst->next =ft_lstnew("2");
    lst->next->next = ft_lstnew("3");
 
    ft_lstadd_front(&lst,new);
    


    while(lst)
    {
        printf("%s\n", lst->content);
      lst = lst->next;
    }
    
}