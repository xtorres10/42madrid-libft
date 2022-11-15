/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:10:24 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/26 14:57:05 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr_str;

	ptr_str = (char *) s;
	while (n > 0)
	{
		*ptr_str = 0;
		ptr_str++;
		n--;
	}
}
/*
#include <string.h>
int	main()
{
	size_t a = 3;
	char str[]  = "Hello world!!";
	char *test;
//	char *str2 = "Hello world!!";
	bzero(str, a);
//	ft_bzero(str, a);
	for (int i = 0; i < 22; i++)
	{
		if (str[i] == '\0')
			printf("\\0");
		else
			printf("%c", str[i]);
	}
	printf("\n");
	//printf("%s\n", str);
	printf("%lu\n", strlen(test));
//	printf("%s", str2);
}*/
