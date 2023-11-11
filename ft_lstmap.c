/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:17:07 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/11 04:26:23 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*frst;
	t_list	*s;
	void *p;
	 
	s = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		p = f(lst->content);
		frst = ft_lstnew(p);
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
void *f(void *s)
{
	char *p;
	p = s;
	p = "hamid";
	return p;
}
int main ()
{
	t_list *p = ft_lstnew("1");
	p->next = ft_lstnew("2");
	p->next->next = ft_lstnew("3");
	t_list *k;
	k = p;
	
	while (p)
	{
		printf("%s\n",p->content);
		p = p->next;
	}
	
	printf("-----------------------\n");
	t_list *new = ft_lstmap(k,&f,free);
	while (new)
	{
		printf("%s\n",new->content);
		new = new->next;
	}
	
}
