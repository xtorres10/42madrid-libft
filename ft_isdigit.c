/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:59:40 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/21 13:25:39 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	int	a = '9';
	char b = '5';
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
}*/
