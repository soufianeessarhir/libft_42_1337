/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:38:11 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/08 05:00:00 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_count(const char *s, char c)
{
    size_t count;

    count = 0;
 
    
    while (*s)
    {
        while (*s == c)
            s++;
        while (*s != c && *s != '\0' )
        {
            count++;
            s++;
        }
      
    }
    return (count);
}
static void my_free(char **str)
{
    int i = 0;
    while(str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}
static int ft_strfill(const char *s , char **str, char c)
{
    const char *start;
    while (s &&*s)
    {
        while (*s == c)
            s++;
        if(*s != '\0')
        { 
            start = s;
            while (*s != '\0' && *s != c)
                s++;
            *str = ft_substr(start,0,s-start);
            if(!*str)
            {
                my_free(str);
                return(1);
            }
            str++;
        }
    }
    *str = NULL;
    return 0;
} 
char    **ft_split(char const *s, char c)
{
    char    **str;
    size_t  size;
    if(s == NULL)
        return(NULL);
    size = ft_count(s,c) + 1;
    str = malloc(sizeof(char *) * size);
    if (!str)
    {
        my_free(str);
        return (NULL);
    }
    if(ft_strfill(s,str,c) == 1)
        return (NULL);
    
    return (str);
}


// int main ()
// {

   
//     char **str ;
//     const char *s = "      split       this for   me  !       ";
//     // char c = '#';
//     str = ft_split(s,' ');
    
//     while (*str)
//     {
//         printf("|%s|\n",*str);
//         str++;
//     }
    
// }