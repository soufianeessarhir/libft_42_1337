/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:37:40 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/08 16:15:01 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)(b);
	while (i < len)
	{
		str[i] = (unsigned char )(c);
		i++; 
	}
	return (b);
}
// int main ()
// {
//    char i[] ="hellow";
//     //101 00111001
//     // 000000001 00000001 00000001 00000001 
//     // ft_memset(&i,136,1);
//     ft_memset(i, '0', 16);
//     printf("%s\n",i);
// }