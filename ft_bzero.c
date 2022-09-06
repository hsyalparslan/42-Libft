/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:59:31 by harslan           #+#    #+#             */
/*   Updated: 2022/09/06 19:23:47 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	size_t			counter;
	unsigned char	*str;

	counter = 0;
	str = (unsigned char *)s;
	while (counter < n)
	{
		str[counter] = 0;
		counter++;
	}
	s = str;
}

int	main(void)
{
	char *s = malloc(4 * sizeof(char));
	s = "abcd";
	ft_bzero(s, 1);
	printf("%s", s);
}