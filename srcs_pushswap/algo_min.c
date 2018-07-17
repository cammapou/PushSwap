/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:57:30 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/17 16:44:03 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_algomin(t_list **lst_a)
{
	while (ft_check_stack2(*lst_a) == -1)
	{
		if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
		{
			ft_sa(lst_a);
			ft_putendl("sa");
		}
		else
		{
			ft_rra(lst_a);
			ft_putendl("rra");
		}
	}
}

void	ft_suite_pa(t_list **lst_a, t_list **lst_b, int c)
{
	c = ft_lstcount(*lst_b);
	if (ft_lstcount(*lst_a) <= 3)
		ft_algomin(lst_a);
	while (c)
	{
		ft_pa(lst_a, lst_b);
		ft_putendl("pa");
		c--;
	}
}

void	ft_quick_min(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int		c;
	int		min;

	min = ft_minval(*lst_a);
	c = ft_check_val(*lst_a, min + ((ft_maxval(*lst_a) - min)));
	while (c && ft_check_stack2(*lst_a) == -1)
		if (*((int*)(*lst_a)->content) == min)
		{
			ft_pb(lst_a, lst_b);
			ft_putendl("pb");
			min = ft_minval(*lst_a);
			c--;
		}
		else if (ft_len_sort(*lst_a, min) >= 0)
		{
			ft_ra(lst_a);
			ft_putendl("ra");
		}
		else
		{
			ft_rra(lst_a);
			ft_putendl("rra");
		}
	ft_suite_pa(lst_a, lst_b, c);
}
