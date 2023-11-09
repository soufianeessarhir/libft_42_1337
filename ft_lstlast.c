/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:32:44 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/09 02:28:47 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		return (NULL);
	while (lst)
	{
		lst = lst->next;
	}
	return (lst);
}
