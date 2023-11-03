/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:28:19 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/03 17:49:53 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strtrim(char const* s1, char const* set)
{
    size_t front;
    size_t end;
    char *str;

    front = 0;
    end = ft_strlen(s1);
    
    while (s1[front]&& ft_strchr(set, s1[front]))
        front++;
    while (s1[end - 1] &&  ft_strchr(set,s1[end - 1]) && end - 1 > front)
        end--;
    str = malloc(sizeof(char) * (end - front) + 1);
    if (!str)
        return NULL;
    ft_strlcpy(str,&s1[front],end - front + 1);
    return (str);
}
// int main()
// {
// 	printf("%s\n", ft_strtrim(NULL, "abc"));
// 	printf("%s\n", ft_strtrim(NULL, "xyz"));
// 	return 0;
// }