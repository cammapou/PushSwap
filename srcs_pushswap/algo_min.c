/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:57:30 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 15:43:44 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void 		ft_algomin(t_list **lst_a)
{
 	while (ft_check_stack2(*lst_a) == -1)
 	{
 		if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
		{
			ft_sa(lst_a);
			ft_printf("sa\n");
		}
		else
		{
			ft_rra(lst_a);
			ft_printf("rra\n");
		}
	}
}

void	ft_suite_pa(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	ev->len_b = ft_stack_len_b(*lst_b);
	while (ev->len_b)
	{
		ft_pa(lst_a, lst_b);
		ft_putendl("pa");
		ev->len_b--;
	}
}

void	ft_quick_min(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	while (1)
	{
		while (ft_check_val(*lst_a, ev->med) == -1)
		{
			ev->len_a = ft_stack_len_a(*lst_a);
			if (*(int*)(*lst_a)->content < ev->med)
			{
				ft_pb(lst_a, lst_b);
				ft_printf("pb\n");
			}
			else
			{
				ft_ra(lst_a);
				ft_printf("ra\n");
			}
		}
		if (ev->len_a == 3)
		{
			ft_algomin(lst_a);
			break ;
		}
		ev->med++;
	}
	ft_suite_pa(ev, lst_a, lst_b);
}
