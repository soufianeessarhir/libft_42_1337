/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:43:03 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/01 15:23:58 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
    long long  nb;
    int s;

    s = 1;
    
    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    if (*str == '-')
    {
        s = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    nb = 0;
    while (*str && (*str >= '0' && *str <= '9'))
    {
        if (nb >= 9223372036854775807 && (s == 1))
            return (-1);
        else if (nb >= 9223372036854775807 &&(s == -1))
            return (0);
        nb = nb*10 + *str - '0';
        str++;
    }
    return (s * nb);
}
