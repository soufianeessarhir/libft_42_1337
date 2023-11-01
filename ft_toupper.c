/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:43:15 by sessarhi          #+#    #+#             */
/*   Updated: 2023/10/31 20:43:37 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int    ft_toupper(int c)
 {
   if(c >= 'a' && c <= 'z')
      return (c - 32);
   return (c);
}
int main()
{
   printf("%c\n",ft_toupper('a'));
   printf("%c\n",ft_toupper('0'));
   printf("%c\n",ft_toupper(100));
   printf("%c\n",ft_toupper(5));
   printf("%c\n",ft_toupper('W'));
   printf("%c\n",ft_toupper('Z'));
}
 