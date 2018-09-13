/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:57:30 by cammapou          #+#    #+#             */
/*   Updated: 2018/08/23 13:19:43 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int		check_stack2(t_list *lst_a)
{
	while (lst_a->next)
	{
		if (*((int*)lst_a->content) < *((int*)lst_a->next->content))
			return (-1);
		lst_a = lst_a->next;
	}
	return (0);
}

void			algomin(t_list **lst_a)
{
	while (check_stack2(*lst_a) == -1)
	{
		if (lastval(*lst_a) > blastval(*lst_a))
		{
			sa(lst_a);
			ft_putendl("sa");
		}
		else
		{
			rra(lst_a);
			ft_putendl("rra");
		}
	}
}

static void		suite_pa(t_list **lst_a, t_list **lst_b)
{
	int			c;

	c = ft_lstcount(*lst_b);
	if (ft_lstcount(*lst_b) >= 2)
	{
		if (lastval(*lst_b) < blastval(*lst_b))
		{
			sb(lst_b);
			ft_putendl("sb");
		}
	}
	if (ft_lstcount(*lst_a) <= 3)
		algomin(lst_a);
	while (c)
	{
		pa(*lst_a, *lst_b);
		ft_putendl("pa");
		c--;
	}
	if (lastval(*lst_a) > blastval(*lst_a))
	{
		sb(lst_b);
		ft_putendl("sb");
	}
}

void			small_quick(t_list **lst_a, t_list **lst_b, int min, int med)
{
	min = ft_lstmin(*lst_a);
	while (1)
		if (ft_lstcount(*lst_a) == 3)
		{
			algomin(lst_a);
			break ;
		}
		else if (lastval(*lst_a) < med)
		{
			pb(*lst_a, *lst_b);
			ft_putendl("pb");
			min = ft_lstmin(*lst_a);
		}
		else if (len_sort(*lst_a, min) >= 0)
		{
			rra(lst_a);
			ft_putendl("rra");
		}
		else
		{
			ra(lst_a);
			ft_putendl("ra");
		}
	suite_pa(lst_a, lst_b);
}
