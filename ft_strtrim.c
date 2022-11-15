/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:42:36 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/07 21:14:17 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_findc(char const str, char const *c)
{
	while (*c)
	{
		if (str == *c)
			return (1);
		c++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len_f;
	size_t	len_i;
	size_t	j;

	if (!s1)
		return (NULL);
	len_f = ft_strlen(s1);
	len_i = 0;
	j = 0;
	while (s1[len_i] && ft_findc(s1[len_i], set))
		len_i++;
	while (len_f - 1 && ft_findc(s1[len_f - 1], set))
		len_f--;
	if (len_f < len_i)
		len_f = len_i;
	str = (char *)malloc((len_f - len_i) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (len_i < len_f)
		str[j++] = s1[len_i++];
	str[j] = '\0';
	return (str);
}
/*
int	main()
{
	char	*str = "1hola";
	char	*set = "";
	printf("%s\n", ft_strtrim(str, set));
}*/
