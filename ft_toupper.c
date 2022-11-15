/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:10:03 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/23 20:08:42 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}
/*
int	main()
{
	char c = 'a';
	printf("%c\n", toupper(c));
	printf("%c\n", ft_toupper(c));
}*/
