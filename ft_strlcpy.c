/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:46:32 by sessarhi          #+#    #+#             */
/*   Updated: 2023/10/31 23:15:42 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t  size;

    i = 0;
    size = ft_strlen(src);
    while (src[i]&& i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (size);
}
// int main() {
//     char src[] = "Hello, World!   .";
//     char dest[12]; // Destination buffer with size 12
//     char dest1[12]; // Destination buffer with size 12
    
//     size_t len = strlcpy(dest, src, 5);
//     size_t i = ft_strlcpy(dest1, src, 5);
    
//     printf("Copied string: %s\n", dest);
//     printf("Length of copied string: %zu\n", len);
//     printf("Copied string: %s\n", dest1);
//     printf("Length of copied string: %zu\n", i);
    
//     return 0;
// }