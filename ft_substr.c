/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:04:49 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/21 00:02:34 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = (char *) ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	while (len > i && start < ft_strlen(s))
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main()
{
	char	*s = "01234";
	printf("%s\n", ft_substr(s, 10, 10));
*/
