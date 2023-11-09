/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:52:00 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/08 20:24:43 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
// int main()
// {
//     char s[] = "hello world welcome in c";
//     size_t n = 5;
//     bzero(s,n);
//     for(int i = 0; i < 10; i++)
//     {
//         printf("%d\n", s[i] );
//     }
// }