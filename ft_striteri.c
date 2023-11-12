/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 06:52:10 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/12 05:16:39 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void uppercase(unsigned int index, char *ch)
// {
//     *ch = ft_toupper(*ch);
// }
// int main()
// {
// 	char str[] = "hello";
//     ft_striteri(str, uppercase);
// 	printf("%s\n", str);
// }
