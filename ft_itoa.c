/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:18:59 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/08 21:19:06 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizenumb(long nb)
{
	int	s;

	s = 0;
	if (nb < 0)
	{
		nb *= -1;
		s = 1;
	}
	if (nb >= 10)
		return (1 + s + ft_sizenumb(nb / 10));
	else
		return (1 + s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;
	long	nbr;

	nbr = n;
	size = ft_sizenumb(nbr);
	str = (char *) malloc(size * sizeof(char) + 1);
	if (!str || nbr < -2147483648 || nbr > 2147483647)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		str[i] = '-';
		i++;
	}	
	str[size] = '\0';
	while (i < size)
	{
		str[size - 1] = nbr % 10 + 48;
		nbr /= 10;
		size--;
	}
	return (str);
}
/*
int	main()
{
	printf("%s\n", ft_itoa(10));
}*/
