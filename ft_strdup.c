/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:37:11 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/02 23:40:22 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strdup(const char *str)
{
    int i;
    i = 0;
    char *ptr;
    ptr = malloc(sizeof(char ) * (ft_strlen(str)));
    if(!ptr)
        return (NULL);
    
    while(str[i])
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}