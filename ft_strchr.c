/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:06:01 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/01 18:20:31 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char   *ft_strchr(const char *s, int c)
 {
    int i;
    
    i = 0;
    while (s[i])
    {
        if (s[i]== c)
            return ((char *)(s+i));  
        i++;      
    }
    if(s[i] == c)
        return ((char *)(s+i));  
    return (NULL);
 }
