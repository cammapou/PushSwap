/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_suite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:59:48 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/18 12:06:38 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		ft_algo_suite(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	ft_quick(ev, lst_a, lst_b);
	ft_quick_b1(ev, lst_a, lst_b);
}
