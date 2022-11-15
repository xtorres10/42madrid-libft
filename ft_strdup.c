/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:30:53 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/05 17:03:48 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char *) malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	while (len > 0)
	{
		str[len - 1] = s1[len - 1];
		len--;
	}
	return (str);
}
/*
int	main()
{
	char *s = "Hello";
	printf("origin: %s\n", strdup(s));
	printf("My fun: %s\n", ft_strdup(s));
}*/
