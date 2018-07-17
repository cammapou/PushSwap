/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/17 16:44:59 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_pushswap(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	if (ft_check_stack2(*lst_a) == 0)
		return (0);
	else if (ft_lstcount(*lst_a) <= 3)
		ft_algomin(lst_a);
	else if (ft_lstcount(*lst_a) > 3 && ft_lstcount(*lst_a) <= 30)
		ft_quick_min(ev, lst_a, lst_b);
	else
		ft_sort(ev, lst_a, lst_b);
	return (0);
}
