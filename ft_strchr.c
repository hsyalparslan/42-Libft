/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:07:44 by harslan           #+#    #+#             */
/*   Updated: 2022/08/13 17:43:30 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	k;

	k = c;
	while (*s)
	{
		if (*s == k)
			return ((char *)s);
		s++;
	}
	if (*s == k)
		return ((char *)s);
	return (NULL);
}
