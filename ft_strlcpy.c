/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:46:32 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/05 03:21:14 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
size_t    ft_strlcpy(char * dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  size;

    i = 0;
    size = ft_strlen(src);

    if (dstsize == 0 )
        return size;
    while (src[i]&& i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (size);
}
// int main ()
// {
//     char dst[20]; 
//     char dst1[20];
//     char src[] = "hellow";
//     char src1[] = "hellow";
//     printf("%zu  %s\n",ft_strlcpy(dst,src1,-1),dst);
//     printf("%zu  %s\n",strlcpy(dst1,src,-1),dst1);
// }