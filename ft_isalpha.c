/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:31:22 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/21 12:59:13 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main()
{
	int var1 = 'A';
	int var2 = '\n';
	printf("%d\n", ft_isalpha(var1));
	printf("%d\n", ft_isalpha(var2));
}*/
