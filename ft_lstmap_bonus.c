/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 05:18:27 by xtorres-          #+#    #+#             */
/*   Updated: 2022/04/21 07:47:32 by xtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*second;
	void	*ncontent;

	first = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		ncontent = f(lst->content);
		second = ft_lstnew(ncontent);
		if (!second)
		{
			ft_lstclear(&second, del);
			return (NULL);
		}
		ft_lstadd_back(&first, second);
		lst = lst->next;
	}
	return (first);
}
