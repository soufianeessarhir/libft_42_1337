/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:54:03 by sessarhi          #+#    #+#             */
/*   Updated: 2024/03/19 17:34:48 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar1(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	ft_putstr1(char *s, int *count)
{
	if (!s)
	 s = "(null)";
		write(1, s, ft_strlen(s));
	*count = *count +  ft_strlen(s);	
}

void haha(unsigned long nb, int *count)
{
	char *p = "0123456789abcdef";
	if ( nb >= 16)
	{
		haha(nb / 16,count);
		haha(nb % 16,count);
	}
	else 
		ft_putchar1(p[nb], count);
}
void ft_format_type(char c, int *count, va_list args)
{
    if (c == 'c')
        ft_putchar1(va_arg(args, int), count);
    else if (c == 's')
        ft_putstr1(va_arg(args, char *), count);
    else if (c == 'i' || c == 'd')
        ft_putnbr_base(va_arg(args, int), "0123456789", count);
    else if (c == 'u')
        ft_putnbr_base(va_arg(args, unsigned int), "0123456789", count);
    else if (c == 'x')
        ft_putnbr_base(va_arg(args, long), "0123456789abcdef", count);
    else if (c == 'X')
        ft_putnbr_base(va_arg(args, long), "0123456789ABCDEF", count);
    else if (c == 'p')
    {
        ft_putstr1("0x", count);
        haha(va_arg(args,unsigned long) ,count);
    }
    else if (c == '%')
        ft_putchar1('%', count);		
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	i = 0;
	count = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			ft_format_type(format[i], &count, args);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			break ;
		else 
			ft_putchar1(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
