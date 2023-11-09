/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:07:35 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/08 19:36:29 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	dlen = ft_strlen(dst);
	i = 0;
	if (dlen >= dstsize)
		return (slen + dstsize);
	while (dlen + i < dstsize - 1 && src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen); 
}
// int main ()
// {
//    char dst[] = "hellow"; 
//    char dst1[] = "hellow"; 
//    char src[] = "world"; 
//    char src1[] = "world"; 
//     printf("%zu  \n",ft_strlcat(dst,src,-1));
//     printf("%zu  \n",strlcat(dst1,src1,-1));
// }