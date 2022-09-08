/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:07:38 by harslan           #+#    #+#             */
/*   Updated: 2022/09/08 03:18:08 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	seperator(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	counter(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (seperator(str[i], c))
			i++;
		if (!seperator(str[i], c) && str[i])
			count++;
		while (!seperator(str[i], c) && str[i])
			i++;
	}
	return (count);
}

static char	*worddup(char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && !seperator(s[i], c))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && !seperator(s[i], c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strarray;
	char	*str;
	int		count;

	str = (char *)s;
	i = 0;
	count = counter(str, c);
	strarray = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strarray)
		return (NULL);
	while (*str)
	{
		while (*str && seperator(*str, c))
			str++;
		if (*str)
		{
			strarray[i] = worddup(str, c);
			i++;
			while (*str && !seperator(*str, c))
				str++;
		}
	}
	strarray[i] = NULL;
	return (strarray);
}
