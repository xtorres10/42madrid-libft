/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:56:20 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/08 19:36:30 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = (void *) malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int main()
{
	printf("%s\n", ft_calloc(SIZE_MAX, SIZE_MAX));
	printf("%s\n", calloc(SIZE_MAX, SIZE_MAX));
}*/
