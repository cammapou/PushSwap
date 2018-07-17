/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 19:17:48 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/17 19:20:34 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_quick_b2(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_maxval(*lst_b) - med) / 2);
	while ((ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2)
		if (*(int*)(*lst_b)->content > med)
		{
			ft_pa(lst_a, lst_b);
			ft_putendl("pa");
			i++;
		}
		else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0)
		{
			ft_rb(lst_b);
			ft_putendl("rb");
		}
		else
		{
			ft_rrb(lst_b);
			ft_putendl("rrb");
		}
	while (i--)
	{
		ft_pb(lst_a, lst_b);
		ft_putendl("pb");
	}
}

int		ft_quick(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	while(1)
	{
		ev->med = ft_check_med(lst_a);
		while (ft_check_val(*lst_a, ev->med) == -1)
		{
			if (ft_lstcount(*lst_a) == 2)
				break;
			if (*(int*)(*lst_a)->content < ev->med)
			{
				ft_pb(lst_a, lst_b);
				ft_putendl("pb");
			}
			else
			{
				ft_ra(lst_a);
				ft_putendl("ra");
			}
		}
		if (ft_lstcount(*lst_a) == 2)
		{
			ft_algomin(lst_a);
			break;
		}
	}
	return (ev->md);
}

int		ft_quickb1a(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_maxval(*lst_b) - med) / 2);
	while ((ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2)
		if (*(int*)(*lst_b)->content > med)
		{
			ft_pa(lst_a, lst_b);
			ft_putendl("pa");
			i++;
		}
		else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0)
		{
			ft_rb(lst_b);
			ft_putendl("rb");
		}
		else
		{
			ft_rrb(lst_b);
			ft_putendl("rrb");
		}
	return (i);
}

int		ft_quickb1b(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_maxval(*lst_b) - med) / 4);
	while ((ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2)
		if (*(int*)(*lst_b)->content > med)
		{
			ft_pa(lst_a, lst_b);
			ft_putendl("pa");
			i++;
		}
		else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0)
		{
			ft_rb(lst_b);
			ft_putendl("rb");
		}
		else
		{
			ft_rrb(lst_b);
			ft_putendl("rrb");
		}
	return (i);
}

void		ft_quickb1c(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_maxval(*lst_b) - med) / 8);
	while ((ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2)
		if (*(int*)(*lst_b)->content > med)
		{
			ft_pa(lst_a, lst_b);
			ft_putendl("pa");
			i++;
		}
		else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0)
		{
			ft_rb(lst_b);
			ft_putendl("rb");
		}
		else
		{
			ft_rrb(lst_b);
			ft_putendl("rrb");
		}
	while (i--)
	{
		ft_pb(lst_a, lst_b);
		ft_putendl("pb");
	}
}
