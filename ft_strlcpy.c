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

size_t	ft_strlcpy(char *dest, char *src, siz_t size)
{
	size_t	i;
	size_t	srclen;
	ft_strlen(src);
	srclen = ft_strlen(src);
	i = 0;
	if (srclen < size)
	{
		while (src[i++] )
		{
			dest[i] = src[i];
		}
	}
	else if (size != 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
