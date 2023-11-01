/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:57:13 by sessarhi          #+#    #+#             */
/*   Updated: 2023/10/31 16:18:01 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

   int  ft_isprint(int c)
   {
        if (c >= 32 && c <= 127)
            return (1);
        return (0);
   }
   int main()
   {
        printf("%d\n",ft_isprint(30));
         printf("%d\n",ft_isprint(200));
          printf("%d\n",ft_isprint(127));
           printf("%d\n",ft_isprint(128));
            printf("%d\n",ft_isprint(' '));
   }