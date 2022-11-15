/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:25:43 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/01 19:00:04 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptr_s1;
	char	*ptr_s2;

	i = 0;
	ptr_s1 = (char *) s1;
	ptr_s2 = (char *) s2;
	while (n > i)
	{
		if (ptr_s1[i] - ptr_s2[i] != 0)
			return ((unsigned char)ptr_s1[i] - (unsigned char)ptr_s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	*s1 = "He liot";
	char	*s2 = "He lyot";
	size_t	s = 6;
	printf("%d\n", ft_memcmp(s1, s2, s));
}*/
