/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:38:11 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/13 06:10:31 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (len);
}

static void	my_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

static int	ft_countchars(const char *s, char c, int j)
{
	int	i;

	i = 0;
	while (s[j] == c)
		j++;
	while (s[j] != c && s[j])
	{
		i++;
		j++;
	}
	return (i);
}

static void	ft_strfill(const char *s, char	**str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, ft_countchars(s, c, i));
		if (str[j] == NULL)
		{
			my_free(str);
			return ;
		}
		i = i + ft_countchars(s, c, i);
		j++;
	}
	str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!str)
		return (NULL);
	ft_strfill(s, str, c);
	return (str);
}
