/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:09:58 by harslan           #+#    #+#             */
/*   Updated: 2022/08/13 17:35:12 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	k;

	k = c;
	save = NULL;
	while (*s)
	{
		if (*s == k)
			save = (char *)s;
		s++;
	}
	if (*s == k)
		return ((char *)s);
	return (save);
}
