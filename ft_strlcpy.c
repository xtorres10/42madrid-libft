/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:55:04 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/28 19:59:47 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != 0)
		i++;
	if (size == 0)
		return (i);
	while (*src != '\0' && size - 1 > 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = 0;
	return (i);
}
/*
int main()
{
	char *str = "";
	char dest[10];
	char dest2[10];
	size_t s = 4;
	printf("strlcpy: %lu\n", strlcpy(dest, str, s));
	printf("ft_strlcpy: %lu\n", ft_strlcpy(dest2, str, s));
	printf("dest1 -> %s size: %lu\n", dest, strlen(dest));
	printf("dest2 -> %s size: %lu\n", dest2, strlen(dest2));
}*/
