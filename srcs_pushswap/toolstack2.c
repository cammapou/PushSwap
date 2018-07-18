/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolstack2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/18 18:49:57 by cammapou         ###   ########.fr       */
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
