/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:25:45 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/03 20:18:47 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i ;
    const unsigned char *str1;
    const unsigned char *str2;

    i = 0;
    str1 = (const unsigned char *)(s1);
    str2 = (const unsigned char *)(s2);
    
    while (str1[i] == str2[i] &&  i < n-1 )
        i++;
    return (str1[i] - str2[i]);  
}
// int main ()
// {
//     char s1[] = {1,2,3,4};
//     int s2[] = {1,2,3,4};
//     printf("%d\n",ft_memcmp(s1,s2,8));
//      printf("%d\n",memcmp(s1,s2,8));
// }

