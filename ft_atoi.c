/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:43:03 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/09 23:25:30 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAX 922337203685477580

int	ft_atoi(const char *str)
{
	long long	nb;
	int			s;

	nb = 0;
	s = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if (nb > MAX || (nb == MAX && *str - '0' > 7))
		{
			if (s == 1)
				return (-1);
			return (0); 
		}
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (s * nb);
}
// int main ()
// {
//     printf("%d\n", ft_atoi("922337203680547758"));
//     printf("%d\n", atoi(" 922337203685477580"));
// }