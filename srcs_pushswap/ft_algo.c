/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:54:12 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 19:50:27 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_sort(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int med;
	int i;

	i = 0;
	med = ft_quick(ev, lst_a, lst_b);
	if (ft_lstcount(*lst_a) + ft_lstcount(*lst_b) > 101)
	{
		i = ft_quick_b1a(lst_a, lst_b, med, 0);
		i = ft_quick_b1b(lst_a, lst_b, med, i);
		ft_quick_b1c(lst_a, lst_b, med, i);
	}
	else
		ft_quick_b2(ev, lst_a, lst_b, med, 0);
	ft_select_b1(ev, lst_a, lst_b);
	ft_quick_b3(ev, lst_a, lst_b, med, 0);
	med = ft_minval(*lst_b) + ((ft_maxval(*lst_b) - ft_minval(*lst_b)) / 2);
	if (ft_lstcount(*lst_a) + ft_lstcount(*lst_b) > 101)
	{
		i = ft_quick_b1a(lst_a, lst_b, med, 0);
		i = ft_quick_b1b(lst_a, lst_b, med, i);
		ft_quick_b1c(lst_a, lst_b, med, i);
	}
	else
		ft_quick_b4(ev, lst_a, lst_b, med, 0);
	ft_select_b3(lst_a, lst_b);
}
