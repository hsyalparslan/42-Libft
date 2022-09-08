/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:06:22 by harslan           #+#    #+#             */
/*   Updated: 2022/09/08 03:18:11 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*dest;
	unsigned char	*source;

	counter = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (counter < n)
	{
		dest[counter] = source[counter];
		counter++;
	}
	return (dst);
}
