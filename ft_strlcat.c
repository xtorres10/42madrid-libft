/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:01:53 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/29 17:23:35 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	n;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	n = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (len_dest + n < size - 1 && src[n] != '\0')
	{
		dest[len_dest + n] = src[n];
		n++;
	}
	dest[len_dest + n] = '\0';
	return (len_dest + len_src);
}
/*
int	main()
{
//	char	*str = "World";
	char	*str2 = "lorem ipsum dolor sit amet";
//	char	*dest3 = "there is no stars in the sky";
	char	*dest4 = "rrrrrrrrrrrrrrr";
//	char	dest[20] = "Hello-";
//	char	dest2[20] = "Hello-";
	size_t	s = 5;
	printf("%lu  size: %lu\n", strlcat(dest4, str2, s), s);
	printf("%s\n", dest4);
//	printf("%lu  size: %lu\n", ft_strlcat(dest4, str2, s), s);
//	printf("%s\n", dest4);
}*/
