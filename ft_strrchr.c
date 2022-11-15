/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:47:06 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/08 18:17:47 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *) s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (ptr[len] == (unsigned char)c)
			return (&ptr[len]);
		len--;
	}
	return (0);
}
