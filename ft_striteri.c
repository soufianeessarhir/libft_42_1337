/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 06:52:10 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/05 07:23:12 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i;
    
    i = 0;
    while(s[i])
    {
        f(i,&s[i]);
        i++;
    }
}
// void uppercase(unsigned int index, char *ch)
// {
//     *ch = ft_toupper(*ch);
// }
// int main()
// {
// 	char str[] = "hello";
//     ft_striteri(str, uppercase);
// 	printf("%s\n", str);
// }
