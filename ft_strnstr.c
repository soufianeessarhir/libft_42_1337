/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:43:37 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/08 19:49:14 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0 && !haystack)
		return (NULL);
	if (*needle == '\0')
		return ((char *)(haystack));
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && j + i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char *haystack = "hello world";
//     char *haystack1 = "hello world";
//     char *needle = "";
//     printf("%s\n",ft_strnstr(haystack,needle,8));
//     printf("%s\n",strnstr(haystack1,needle,8));

// }
