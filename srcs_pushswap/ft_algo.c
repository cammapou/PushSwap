/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:54:12 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/18 18:46:39 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int med;

	ev->i = 0;
	med = ft_minval(*lst_a) + ((ft_maxval(*lst_a) - ft_minval(*lst_a)) / 2);
	ft_algo_suite(ev, lst_a, lst_b);
	if (ft_lstcount(*lst_a) + ft_lstcount(*lst_b) > 101)
	{
		ev->i = ft_quickb1a(lst_a, lst_b, med, 0);
		ev->i = ft_quickb1b(lst_a, lst_b, med, ev->i);
		ft_quickb1c(lst_a, lst_b, med, ev->i);
	}
	else
		ft_quick_b2(lst_a, lst_b, med, 0);
	ft_select_b1(ev, lst_a, lst_b);
	ft_quick_b3(lst_a, lst_b, med, 0);
	med = ft_minval(*lst_b) + ((ft_maxval(*lst_b) - ft_minval(*lst_b)) / 2);
	if (ft_lstcount(*lst_a) + ft_lstcount(*lst_b) > 101)
	{
		ev->i = ft_quickb1a(lst_a, lst_b, med, 0);
		ev->i = ft_quickb1b(lst_a, lst_b, med, ev->i);
		ft_quickb1c(lst_a, lst_b, med, ev->i);
	}
	else
		ft_quick_b4(lst_a, lst_b, med, 0);
	ft_select_b3(lst_a, lst_b);
}
