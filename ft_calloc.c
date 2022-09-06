/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harslan <harslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:59:40 by harslan           #+#    #+#             */
/*   Updated: 2022/09/06 18:40:31 by harslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = malloc(count * size);
	if (array == NULL)
	{
		return (NULL);
	}
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	return (ft_memset(array, 0, size * count));
}

int	main(void) {
    int* allocated_with_calloc = ft_calloc(5, sizeof(int));
	printf("%d", allocated_with_calloc[1]);
}