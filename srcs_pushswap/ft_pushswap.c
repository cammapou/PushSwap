/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 15:45:03 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_pushswap(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int len;

	len = ft_stack_len_a(*lst_a);
	if (ft_check_stack(*lst_a) == 0)
		return (0);
	else if (len <= 3)
		ft_algomin(lst_a);
	else if (len > 3 && len <= 5)
		ft_quick_min(ev, lst_a, lst_b);
	else if (len > 5 && len <= 100)
		ft_quick(ev, lst_a, lst_b);
	return (0);
}
