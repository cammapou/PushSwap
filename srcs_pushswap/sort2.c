/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/26 13:23:25 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		quick_b1c(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_lstmax(*lst_b) - med) / 8);
	while ((ft_lstcount(*lst_b) - check_val(*lst_b, med)) / 2)
		if (lastval(*lst_b) > med)
		{
			pa(*lst_a, *lst_b);
			ft_putendl("pa");
			i++;
		}
		else if (len_sort(*lst_b, ft_lstmax(*lst_b)) >= 0)
		{
			rrb(lst_b);
			ft_putendl("rrb");
		}
		else
		{
			rb(lst_b);
			ft_putendl("rb");
		}
	while (i--)
	{
		pb(*lst_a, *lst_b);
		ft_putendl("pb");
	}
}

void		select_b2(t_list **lst_a, t_list **lst_b, int med)
{
	int		c;

	c = ft_lstcount(*lst_b) - check_val(*lst_b, med);
	while (c)
		if (lastval(*lst_b) == ft_lstmax(*lst_b))
		{
			pa(*lst_a, *lst_b);
			ft_putendl("pa");
			c--;
		}
		else if (len_sort(*lst_b, ft_lstmax(*lst_b)) >= 0)
		{
			rrb(lst_b);
			ft_putendl("rrb");
		}
		else
		{
			rb(lst_b);
			ft_putendl("rb");
		}
}

void		quick_b2(t_list **lst_a, t_list **lst_b, int med, int i)
{
	while (!iro(*lst_b))
		while (ft_lstcount(*lst_b) - check_val(*lst_b, (med = ft_lstmin(*lst_b)
			+ ((ft_lstmax(*lst_b) - ft_lstmin(*lst_b)) / 2))) && !iro(*lst_b))
			if (lastval(*lst_b) > med)
			{
				pa(*lst_a, *lst_b);
				ft_putendl("pa");
				i++;
			}
			else if (len_sort(*lst_b, ft_lstmax(*lst_b)) >= 0 && \
			ft_lstcount(*lst_a) + ft_lstcount(*lst_b) > 101)
			{
				rrb(lst_b);
				ft_putendl("rrb");
			}
			else
			{
				rb(lst_b);
				ft_putendl("rb");
			}
	while (i--)
	{
		pb(*lst_a, *lst_b);
		ft_putendl("pb");
	}
}

void		select_b3(t_list **lst_a, t_list **lst_b)
{
	int		c;
	int		max;

	c = ft_lstcount(*lst_b);
	max = ft_lstmax(*lst_b);
	while (c)
		if (lastval(*lst_b) == max)
		{
			pa(*lst_a, *lst_b);
			ft_putendl("pa");
			max = ft_lstmax(*lst_b);
			c--;
		}
		else if (len_sort(*lst_b, max) >= 0)
		{
			rrb(lst_b);
			ft_putendl("rrb");
		}
		else
		{
			rb(lst_b);
			ft_putendl("rb");
		}
}
