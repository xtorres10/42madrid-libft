/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:18:18 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/30 21:03:36 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *) haystack;
	if (*needle == 0)
		return (ptr);
	while (len - i > 0 && ptr[i])
	{
		while (ptr[i + j] == needle[j] && needle[j])
			j++;
		if (j == ft_strlen(needle) && i + j <= len)
			return (&ptr[i]);
		j = 0;
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	*str = "AAAAAAAAAA";
	char	*needle = "AAAAAAAAAA";
	size_t	n = strlen(str);
//	printf("%s\n", strnstr(str, needle, n));
	printf("%s\n", ft_strnstr(str, needle, n));
}*/
