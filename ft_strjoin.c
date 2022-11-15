/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:26:17 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/06 16:18:35 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	str = (char *) malloc((len_s1 + ft_strlen(s2)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[len_s1] = s2[i];
		i++;
		len_s1++;
	}
	str[len_s1] = '\0';
	return (str);
}
/*
int	main()
{
	char	*s1 = "Hello";
	char	*s2 = "World";
	printf("%s\n", ft_strjoin(s1, s2));
}*/
