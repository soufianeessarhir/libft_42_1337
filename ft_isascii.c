/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:42:06 by sessarhi          #+#    #+#             */
/*   Updated: 2023/10/31 15:50:44 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}
int main ()
{
    printf("%d\n",ft_isascii('a'));
    printf("%d\n",ft_isascii('z'));
     printf("%d\n",ft_isascii('0'));
      printf("%d\n",ft_isascii(128));
       printf("%d\n",ft_isascii(-1));
}