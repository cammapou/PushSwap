/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolstack2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 19:00:03 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_check_val(t_list *lst_a, int nbr)
{
	int	*nbr_tmp;

	while (lst_a)
	{
		nbr_tmp = (int*)lst_a->content;
		if (*nbr_tmp < nbr)
			return (-1);
		lst_a = lst_a->next;
	}
	return (0);
}

int		ft_check_val2(t_list *lst_b, int nbr)
{
	int	*nbr_tmp;

	while (lst_b)
	{
		nbr_tmp = (int*)lst_b->content;
		if (*nbr_tmp > nbr)
			return (-1);
		lst_b = lst_b->next;
	}
	return (0);
}

int		ft_check_med(t_list **lst_a)
{
	int	min;
	int	max;
	int	med;

	med = 0;
	max = ft_maxval(*lst_a);
	min = ft_minval(*lst_a);
	med = min + (max - min) / 2;
	return (med);
}

void	ft_stack_clear(t_list **begin_list)
{
	if (*begin_list != NULL)
	{
		ft_stack_clear(&((*begin_list)->next));
		free(*begin_list);
		*begin_list = NULL;
	}
}

size_t		ft_lstcount(t_list *lst)
{
	size_t	count;

	count = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
