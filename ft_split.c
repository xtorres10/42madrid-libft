/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 07:47:58 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/21 07:49:49 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	total_words(char const *s, char c)
{
	int	total;

	total = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			total++;
		while (*s && *s != c)
			s++;
	}
	return (total);
}

static char	*add_word(char const *s, char c)
{
	char	*word;
	int		len;
	int		j;

	len = 0;
	j = 0;
	while (s[len] && s[len] != c)
			len++;
	word = (char *) malloc((len + 1) * sizeof(char));
	while (j < len)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static char	*val_str(char const *s, char c, char **strs, int i)
{
	strs[i] = add_word(s, c);
	if (!strs[i])
	{
		while (--i)
			free(strs[i]);
		free(strs);
		return (NULL);
	}
	return (strs[i]);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	char	words;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	words = total_words(s, c);
	strings = (char **) malloc((words + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			val_str(s, c, strings, i);
		while (*s && *s != c)
			s++;
		i++;
	}
	strings[i] = NULL;
	return (strings);
}
/*
int	main()
{
	char	*s = "  koda  42  "; 
	char	c = ' ';
	int		i = 0;
	char	**str = ft_split(s, c);
	while (i < 3)
	{
		printf("%s\n", str[i]);
		i++;
	}
	printf("%s\n", str[1]);
	system("leaks a.out");
}*/