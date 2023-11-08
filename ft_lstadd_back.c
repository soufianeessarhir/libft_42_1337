/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:42:43 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/07 21:27:53 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(*lst && new)
        return;
    t_list *tmp;
    if(*lst && !new)
        *lst = new;
    tmp = *lst;
    while ((*lst)->next)
    {
       *lst = (*lst)->next; 
    }
    *lst = tmp;
}