/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:34:17 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/02 22:11:25 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;
    
    d = (unsigned char *)(dst);
    s = (const unsigned char*)(src);
    
    if (d < s)
        ft_memcpy(d,s,len);
    else if (d > s)
    {
       while (len --)
          d[len]=s[len]; 
    } 
    return (dst);
}
// int main ()
// {
//     int dst[] = {1,2,3,4,5};
//     int dst1[] = {1,2,3,4,5};
//     int dst2[] = {1,2,3,4,5};
//     memcpy(dst + 2, dst, 8);
 
//     for (int i=0; i < 4;i++)
//     { 
//         printf("%d\n",dst[i]);
//     }
//     printf("-------------------\n");
//     memmove(dst1 +2, dst1, 8);
     
//     for (int i=0; i < 4;i++)
//     { 
//      printf("%d\n",dst1[i]);
//     }
    
//     printf("-------------------\n");
//     ft_memmove(dst2 +2, dst2, 8);
    
 
//     for (int i=0; i < 4;i++)
//     {    
//         printf("%d\n",dst2[i]);
//     }
    
// }