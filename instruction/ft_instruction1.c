/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:32:53 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/18 18:12:58 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(t_list **lst_a)
{
	t_list	*tmp;

	if (!lst_a)
		return ;
	if ((*lst_a) && (*lst_a)->next)
	{
		tmp = (*lst_a);
		(*lst_a) = (*lst_a)->next;
		tmp->next = (*lst_a)->next;
		(*lst_a)->next = tmp;
	}
}

void	ft_sb(t_list **lst_b)
{
	t_list	*tmp;

	if (!*lst_b)
		return ;
	if (*lst_b && (*lst_b)->next)
	{
		tmp = (*lst_b);
		(*lst_b) = (*lst_b)->next;
		tmp->next = (*lst_b)->next;
		(*lst_b)->next = tmp;
	}
}

void	ft_ss(t_list **lst_a, t_list **lst_b)
{
	if (!*lst_a && !*lst_b)
		return ;
	ft_sa(&(*lst_a));
	ft_sb(&(*lst_b));
}

void	ft_pa(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;

	if (!*lst_a || !*lst_b)
		return ;
	if (*lst_b)
	{
		tmp = (*lst_a);
		(*lst_a) = (*lst_b);
		(*lst_b) = (*lst_b)->next;
		(*lst_a)->next = tmp;
	}
}

void	ft_pb(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;

	if (!*lst_a && !*lst_b)
		return ;
	if (*lst_a)
	{
		tmp = (*lst_b);
		(*lst_b) = (*lst_a);
		(*lst_a) = (*lst_a)->next;
		(*lst_b)->next = tmp;
	}
}
