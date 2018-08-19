/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 19:17:48 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/26 13:22:08 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		quick_a(t_list **lst_a, t_list **lst_b)
{
	int		c;
	int		med;

	while (!io(*lst_a))
	{
		med = ft_lstmin(*lst_a) + ((ft_lstmax(*lst_a) - ft_lstmin(*lst_a)) / 2);
		c = check_val(*lst_a, med);
		while (c)
			if (lastval(*lst_a) <= med)
			{
				pb(*lst_a, *lst_b);
				ft_putendl("pb");
				c--;
			}
			else
			{
				ra(lst_a);
				ft_putendl("ra");
			}
	}
}

void		select_b1(t_list **lst_a, t_list **lst_b, int med)
{
	int		c;

	c = (ft_lstcount(*lst_b) - check_val(*lst_b, med)) / 2;
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

void		quick_b1(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_lstmax(*lst_b) - med) / 2);
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

int			quick_b1a(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_lstmax(*lst_b) - med) / 2);
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
	return (i);
}

int			quick_b1b(t_list **lst_a, t_list **lst_b, int med, int i)
{
	med = med + ((ft_lstmax(*lst_b) - med) / 4);
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
	return (i);
}
