/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:33:58 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/16 13:53:27 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *) s;
	i = 0;
	if (c == '\0')
		return (&ptr[ft_strlen(ptr)]);
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char 	*str = "tripouille";
	int	c = 'x';
	printf("%s\n", ft_strchr(str, 't' + 256));
}*/
