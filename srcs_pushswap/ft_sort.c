/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 15:45:03 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_quick_b2(t_ev *ev, t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_maxval(*lst_b) - med) / 2);
	while ((ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2)
		if (*(int*)(*lst_b)->content > med)
		{
			ft_pa(lst_a, lst_b);
			ft_printf("pa\n");
			i++;
		}
		else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0)
		{
			ft_rb(lst_b);
			ft_printf("rrb\n");
		}
		else
		{
			ft_rrb(lst_b);
			ft_printf("rb\n");
		}
	while (i--)
	{
		ft_pb(lst_a, lst_b);
		ft_printf("pb\n");
	}
}

int ft_quick(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	ev->med2 = ft_minval(*lst_a) + ((ft_maxval(*lst_a) - ft_minval(*lst_a)) / 2);
	while(1)
	{
		ev->med = ft_check_med(lst_a);
		while (ft_check_val(*lst_a, ev->med) == -1)
		{
			if (ft_stack_len_a(*lst_a) == 2)
				break;
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
		if (ft_stack_len_a(*lst_a) == 2)
		{
			ft_algomin(lst_a);
			break;
		}
	}
	ft_quick_b1(ev, lst_a, lst_b);
	return (ev->med2);
}

int		ft_quick_b1a(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_maxval(*lst_b) - med) / 2);
	while ((ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2)
		if (*(int*)(*lst_b)->content > med)
		{
			ft_pa(lst_a, lst_b);
			ft_printf("pa\n");
			i++;
		}
		else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0)
		{
			ft_rb(lst_b);
			ft_printf("rb\n");
		}
		else
		{
			ft_rrb(lst_b);
			ft_printf("rrb\n");
		}
	return (i);
}

int		ft_quick_b1b(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_maxval(*lst_b) - med) / 4);
	while ((ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2)
		if (*(int*)(*lst_b)->content > med)
		{
			ft_pa(lst_a, lst_b);
			ft_printf("pa\n");
			i++;
		}
		else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0)
		{
			ft_rb(lst_b);
			ft_printf("rb\n");
		}
		else
		{
			ft_rrb(lst_b);
			ft_printf("rrb\n");
		}
	return (i);
}

void		ft_quick_b1c(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_maxval(*lst_b) - med) / 8);
	while ((ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2)
		if (*(int*)(*lst_b)->content > med)
		{
			ft_pa(lst_a, lst_b);
			ft_printf("pa\n");
			i++;
		}
		else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0)
		{
			ft_rb(lst_b);
			ft_printf("rb\n");
		}
		else
		{
			ft_rrb(lst_b);
			ft_printf("rrb\n");
		}
	while (i--)
	{
		ft_pb(lst_a, lst_b);
		ft_printf("pb\n");
	}
}
