/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:52:15 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/09 12:40:52 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	if (c == '\0' && n > ft_strlen(ptr))
		return (&ptr[ft_strlen(ptr)]);
	while (n--)
	{
		if (*ptr == (char) c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
/*
int	main()
{
	char	*s = "Hello";
	char	c = 'e';
	size_t	n = 14;
	printf("%s\n", memchr(s, c, n));
}*/
