/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:53:08 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/30 21:04:20 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <string.h>
int	main()
{
	char *str = "Hello\n";
	printf("%lu\n", strlen(str));
	printf("%lu\n", ft_strlen(str));
}*/
