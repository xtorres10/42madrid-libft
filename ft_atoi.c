/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:58:54 by xtorres-          #+#    #+#             */
/*   Updated: 2022/03/31 15:30:58 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				signal;
	unsigned long	number;

	signal = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - 48);
		if (number > 9223372036854775808UL && signal == -1)
			return (0);
		if (number > 9223372036854775807UL && signal == 1)
			return (-1);
		str++;
	}
	return (number * signal);
}
/*
int main()
{
	char	*n = "   -21";
	printf("%d\n", atoi(n));
	printf("my: %d\n", ft_atoi(n));
}*/
