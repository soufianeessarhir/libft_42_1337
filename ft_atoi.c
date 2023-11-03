/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:43:03 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/03 19:45:54 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str) {
    long long int   nb = 0;
    int s = 1;
    
    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;

    if (*str == '-') {
        s = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    while (*str && (*str >= '0' && *str <= '9')) {
        
        if (nb > 922337203685477580 || (nb ==  922337203685477580 && *str - '0' > 7 ))
        {
            if (s == 1) {
                return (-1); 
            } else {
                return (0); 
            }
        }
        nb = nb * 10 + (*str - '0');
        str++;
    }

    return (s * nb);
}
int main ()
{
    char *str = " 9223372036854775804546574546745";
    printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str));
}