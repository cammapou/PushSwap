/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/17 19:16:41 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		ft_select_b3(t_list **lst_a, t_list **lst_b)
{
	int		c;
	int		max;

	c = ft_lstcount(*lst_b);
	max = ft_maxval(*lst_b);
	while (c)
		if (*(int*)(*lst_b)->content == max)
		{
			ft_pa(lst_a, lst_b);
			ft_printf("pa\n");
			max = ft_maxval(*lst_b);
			c--;
		}
		else if (ft_len_sort(*lst_b, max) >= 0)
		{
			ft_rb(lst_b);
			ft_printf("rb\n");
		}
		else
		{
			ft_rrb(lst_b);
			ft_printf("rrb\n");
		}
}

void	ft_quick_b3(t_list **lst_a, t_list **lst_b, int med, int i)
{
	while (ft_check_stack2(*lst_b) == -1)
		while (ft_lstcount(*lst_b) - ft_count(*lst_b, (med = ft_minval(*lst_b) +
		((ft_maxval(*lst_b) - ft_minval(*lst_b)) / 2))) && !ft_check(*lst_b))
			if (*(int*)(*lst_b)->content > med)
			{
				ft_pa(lst_a, lst_b);
				ft_printf("pa\n");
				i++;
			}
			else if (ft_len_sort(*lst_b, ft_maxval(*lst_b)) >= 0 && \
					ft_lstcount(*lst_a) + ft_lstcount(*lst_b) > 101)
			{
				ft_rb(lst_b);
				ft_printf("rrb\n");
			}
			else
			{
				ft_rb(lst_b);
				ft_printf("rb\n");
			}
	while (i--)
	{
		ft_pb(lst_a, lst_b);
		ft_printf("pb\n");
	}
}

void	ft_select_b1(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int		med;
	int		c;

	med = ft_check_med(lst_b);
	c = (ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2;
	while (c)
	{
		ev->max = ft_maxval(*lst_b);
		if (*(int*)(*lst_b)->content == ev->max)
		{
			ft_pa(lst_a, lst_b);
			ft_printf("pa\n");
			c--;
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
	}
}

void	ft_quick_b1(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int		med;
	int		c;

	med = ft_check_med(lst_b);
	c = (ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2;
	while (c)
	{
		ev->max = ft_maxval(*lst_b);
		if (*(int*)(*lst_b)->content == ev->max)
		{
			ft_pa(lst_a, lst_b);
			ft_printf("pa\n");
			c--;
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
	}
}

void	ft_quick_b4(t_list **lst_a, t_list **lst_b, int med, int i)
{
	int		max;
	int		c;

	c = (ft_lstcount(*lst_b) - ft_count(*lst_b, med)) / 2;
	while (c)
	{
		max = ft_maxval(*lst_b);
		if (*(int*)(*lst_b)->content == max)
		{
			ft_pa(lst_a, lst_b);
			ft_printf("pa\n");
			c--;
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
	}
}
