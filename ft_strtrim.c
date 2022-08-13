/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:10:07 by harslan           #+#    #+#             */
/*   Updated: 2022/08/13 17:26:20 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char s, char const *set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*newstring;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (*s1 && start < end && check_set(s1[start], set))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (end > 0 && check_set(s1[end - 1], set))
		end--;
	newstring = malloc(sizeof(char) * (end - start + 1));
	if (!newstring)
		return (0);
	i = 0;
	while (s1 && start < end)
		newstring[i++] = s1[start++];
	newstring[i] = 0;
	return (newstring);
}
