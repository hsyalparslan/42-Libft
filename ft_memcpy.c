/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:06:22 by harslan           #+#    #+#             */
/*   Updated: 2022/09/06 19:51:46 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

int	main(void) {
	char *s1 = malloc(4 * sizeof(char));
	char *s2 = malloc(4 * sizeof(char));
	char *s2 = "abc";
	
	printf("%p", ft_memcpy(s1, s2, 4));
}