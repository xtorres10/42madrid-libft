/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:44:17 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/05 19:44:29 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	ptr_dest = (char *) dest;
	ptr_src = (char *) src;
	i = 0;
	while (n > i)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (ptr_dest);
}
/*
int	main()
{
	char dest[] = "Hola";
	char src[] = "";
	size_t	numm = 3;
	printf("%s\n", ft_memcpy(dest, src, numm));
	printf("%lu\n", strlen(dest));
}*/
