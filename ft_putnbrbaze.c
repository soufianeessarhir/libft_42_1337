/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbaze.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:56:31 by sessarhi          #+#    #+#             */
/*   Updated: 2024/03/19 17:01:27 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(long nb, char *base, int *count)
{
	long	lenght;
	
	lenght = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar1('-',count);
		nb = -nb;
	}
	if (nb < lenght)
		ft_putchar1(base[nb],count);
	else
	{
		ft_putnbr_base(nb / lenght, base ,count);
		ft_putnbr_base(nb % lenght, base,count);
	}
}