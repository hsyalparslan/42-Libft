/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:05:44 by harslan           #+#    #+#             */
/*   Updated: 2022/08/13 17:33:58 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	k;
	unsigned char	*str;

	str = (unsigned char *)s;
	k = (unsigned char)c;
	i = 0;
	while (str[i] != k && i < n - 1)
	{
		i++;
	}
	if (str[i] == k && n)
		return (&str[i]);
	return (0);
}
