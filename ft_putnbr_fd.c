/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:26:06 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/08 19:22:53 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr_fd(nb / 10, fd);
			nb = nb % 10;
		}
		if (nb < 10)
			ft_putchar_fd(nb + '0', fd);
	}
}
/*
int	main()
{
	int n = 421;
	ft_putnbr_fd(n, 1);
}*/
