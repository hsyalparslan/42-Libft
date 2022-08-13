/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:59:04 by harslan           #+#    #+#             */
/*   Updated: 2022/08/13 17:31:45 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*substring;

	i = 0;
	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	if (size <= start)
		return ((char *)ft_calloc(1, 1));
	if (size < len)
		len = size;
	substring = (char *)malloc(sizeof(char ) * (len + 1));
	if (!substring)
		return (0);
	while (i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
