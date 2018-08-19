/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool_sort1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:05:34 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/17 17:05:53 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	io(t_list *lst)
{
	while (lst->next)
	{
		if (*((int*)lst->next->content) > *((int*)lst->content))
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	iro(t_list *lst)
{
	while (lst->next)
	{
		if (*((int*)lst->next->content) < *((int*)lst->content))
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	lastval(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (*((int*)lst->content));
}

int	blastval(t_list *lst)
{
	while (lst->next->next)
		lst = lst->next;
	return (*((int*)lst->content));
}

int	len_sort(t_list *lst, int nb)
{
	int		i;
	int		c;
	int		k;

	i = 0;
	k = 0;
	c = ft_lstcount(lst);
	while (lst->content && i <= c / 2)
	{
		if (*((int*)lst->content) == nb)
			return (i);
		lst = lst->next;
		i++;
	}
	k = i;
	while (lst)
	{
		if (*((int*)lst->content) == nb)
			return (k - c);
		lst = lst->next;
		k++;
	}
	return (k - c);
}
