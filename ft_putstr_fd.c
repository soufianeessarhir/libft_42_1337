/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:13:11 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/08 02:52:24 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (!s)
        return;
    while (s[i])
    {
       write(fd,&s[i],1);
       i++;
    }
    
}
// int main()
// {
//    int fd = open("ft_strlen.c",O_RDWR);
//     ft_putstr_fd("hello",3);
// }