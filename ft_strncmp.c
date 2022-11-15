/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:12:38 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/04 22:27:08 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i && (s1[i] || s2[i]))
	{
		if (s1[i] - s2[i] != 0)
			return ((char unsigned)s1[i] - (char unsigned)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char *s1 = "ho";
	char *s2 = "dio";
//	char	*s1 = "\x12\xff\x65\x12\xbd\xde\xad";
//	char	*s2 = "\x12\x02";
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));
}*/
