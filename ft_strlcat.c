/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:07:35 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/01 21:12:28 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t   ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
   size_t i;
   size_t dlen;
   size_t slen;
   
   dlen = ft_strlen(dst);
   slen = ft_strlen(src);
   i = 0;
   
   if (dlen >= dstsize )
      return  (dlen + dstsize);
   if(dstsize == 0)
      return (slen);
   while (dlen + i  < dstsize - 1  && src[i])
   {
      dst[dlen + i] = src[i];
      i++;
   }
   dst[dlen + i] = '\0';
   return (dlen + slen); 
}