/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:37:40 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/02 16:05:12 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *str;
    
    i = 0;
    str = (unsigned char *)(b);
    
    while (i < len)
    {
        str[i] = (unsigned char )(c);
        i++; 
    }
     return (b);  
}
int main ()
{
    int i = 0;
    //101 00111001
    // 000000001 00000001 00000001 00000001 
    ft_memset(&i,136,1);
    ft_memset((char *)&i + 1, 19, 1);
    printf("%d\n",i);
}