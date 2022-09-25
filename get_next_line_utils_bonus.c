/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:08:46 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/09/25 22:13:51 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*p;

	str = malloc(ft_strlen(s1) + 1);
	p = str;
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	aux;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		aux = 1;
	else if (len >= ft_strlen(s))
		aux = ft_strlen(s) - start + 1;
	else
		aux = len + 1;
	sub = (char *)malloc(aux);
	if (!sub)
		return (NULL);
	i = 0;
	while ((start < ft_strlen(s)) && (i < len))
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = 0;
	return (sub);
}
