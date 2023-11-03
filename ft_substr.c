/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:44:02 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/03 10:27:13 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *str;
    size_t i;

    i = 0;
    str = malloc(len + 1);
    
    if(!str)
        return (NULL);
    while (i < len)
    {
       str[i] = *(s + i + start);
       i++;
    }
    str[i] = '\0';
    return (str);
}
// int main ()
// {
//     printf("%s\n",ft_substr("hellow world",12,5));
// }