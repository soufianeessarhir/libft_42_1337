/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:07:35 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/01 18:23:33 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t   ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
   size_t i;
   size_t dlen;
   size_t slen;
   size_t ret;
      
   dlen = ft_strlen(dst);
   slen = ft_strlen(src);
   i = 0;
   
   if (dlen < dstsize)
   ret = dlen + slen;
   else
      ret = slen + dstsize;
   if (dstsize == 0)
   return (ret);
   while (dlen + i  < dstsize - 1  && src[i])
   {
      dst[dlen + i] = src[i];
      i++;
   }
   dst[dlen + i] = '\0';
   return (ret);
 
}


int main ()
{
   char dst[10] = "hellhjgkbn";
   char dst1[10] = "hellhjgkbn";
   char src[10] = "o";
   printf("size = %zu  dst =  %s\n",ft_strlcat(dst,src,sizeof(dst)),dst);
   printf("size = %zu  dst =  %s\n",strlcat(dst1,src,sizeof(dst1)), dst1);
}