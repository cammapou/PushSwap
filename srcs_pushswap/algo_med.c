/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_med.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:54:12 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/26 13:17:02 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int			sort_bis(t_list **lst_a, t_list **lst_b, int med)
{
	med = ft_lstmin(*lst_a) + ((ft_lstmax(*lst_a) - ft_lstmin(*lst_a)) / 2);
	quick_a(lst_a, lst_b);
	select_b1(lst_a, lst_b, med);
	return (med);
}

void				sort(t_list **lst_a, t_list **lst_b)
{
	int				med;
	int				i;

	i = 0;
	med = sort_bis(lst_a, lst_b, 0);
	if (ft_lstcount(*lst_a) + ft_lstcount(*lst_b) > 101)
	{
		i = quick_b1a(lst_a, lst_b, med, 0);
		i = quick_b1b(lst_a, lst_b, med, i);
		quick_b1c(lst_a, lst_b, med, i);
	}
	else
		quick_b1(lst_a, lst_b, med, 0);
	select_b2(lst_a, lst_b, med);
	quick_b2(lst_a, lst_b, med, 0);
	med = ft_lstmin(*lst_b) + ((ft_lstmax(*lst_b) - ft_lstmin(*lst_b)) / 2);
	if (ft_lstcount(*lst_a) + ft_lstcount(*lst_b) > 101)
	{
		i = quick_b1a(lst_a, lst_b, med, 0);
		i = quick_b1b(lst_a, lst_b, med, i);
		quick_b1c(lst_a, lst_b, med, i);
	}
	else
		quick_b1(lst_a, lst_b, med, 0);
	select_b3(lst_a, lst_b);
}
