/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:12:26 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/24 14:03:41 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr_char;

	ptr_char = (char *) b;
	while (len > 0)
	{
		*ptr_char = c;
		ptr_char++;
		len--;
	}
	return (b);
}
/*
#include <string.h>
int	main()
{
	char	str[20] = "Hello world";
	char	str2[20] = "Hello world";
	
	int n = 10;
	int	arr[n];
	arr[6] = 3;
	arr[8] = 9;
	arr[9] = 11;
	printf("%s\n", memset(str, '1', 5));
	printf("%s\n", ft_memset(str2, '1', 5));
//	memset(arr, '1', 3 * sizeof(arr[0]));
//	ft_memset(arr, '1', 3 * sizeof(arr[0]));
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return (0);
}*/
