/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:26:08 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/04 19:53:32 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*data;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	data = (char *)src;
	if (!dest && !data)
		return (NULL);
	if (dest > data)
	{
		while (len--)
			dest[len] = data[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = data[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
    char    dest1[] = "Paquito";
    char    dest2[] = "Paquito";
    char    *src1 = dest1 + 2;
    char    *src2 = dest1 + 2;
    size_t  n = 5;
    printf("Original: %s\n", memmove(dest1, src1, n));
    printf("Mine: %s\n", ft_memmove(dest2, src2, n));
    return (0);
}*/
