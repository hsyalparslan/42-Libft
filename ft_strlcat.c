/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:25:33 by harslan           #+#    #+#             */
/*   Updated: 2022/04/06 21:29:15 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
{
}
		printf("%d", len);
	return (len);
//	write(1, &len, 1);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;
	ft_strlen(src);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	i = 0;
	if (size <= dstlen || size == 0)
	{
		return (size + srclen);
	}
	while (src[i] != '\0' && i < size - dstlen - 1)
	{
		dest[i + dstlen] = src[i];
		i++;
	}
	dest[i + dstlen] = '\0';
	return (dstlen + srclen);
}
