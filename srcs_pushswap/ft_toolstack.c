/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toolstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 19:48:14 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_minval(t_list *lst)
{
	int	min;

	min = INT_MAX;
	while (lst && lst->content)
	{
		if (((*(int*)lst->content) < min))
			min = (*(int*)lst->content);
		lst = lst->next;
	}
	return (min);
}

int		ft_maxval(t_list *lst)
{
	int	max;

	max = INT_MIN;
	while (lst && lst->content)
	{
		if (((*(int*)lst->content) > max))
			max = (*(int*)lst->content);
		lst = lst->next;
	}
	return (max);
}

int		ft_check_stack(t_list *lst_a)
{
	while (lst_a->next)
	{
		if ((*(int*)lst_a->content) < (*(int*)lst_a->next->content))
				return (0);
		lst_a = lst_a->next;
	}
	return (-1);
}

int		ft_check_stack2(t_list *lst_a)
{
	while (lst_a->next)
	{
		if (*((int*)lst_a->content) > *((int*)lst_a->next->content))
			return (-1);
		lst_a = lst_a->next;
	}
	return (0);
}
