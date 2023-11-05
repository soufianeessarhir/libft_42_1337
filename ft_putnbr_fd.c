/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:35:22 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/05 15:53:03 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
void ft_putnbr_fd(int n, int fd)
{
    long    nb;
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar_fd('-',fd);
    }
    if (nb <= 9)
    {
        ft_putchar_fd(nb + '0',fd);
    }
    else
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}
int main()
{
    
    int fd = open("test",O_RDWR);
    ft_putnbr_fd(2147483647,fd);
}