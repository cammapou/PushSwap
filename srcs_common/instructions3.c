/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:32:53 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/26 13:16:07 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_list **lst_a)
{
	t_list	*tmp;

	tmp = *lst_a;
	if (ft_lstcount(*lst_a) > 1)
	{
		ft_lstaddend(lst_a, ft_lstnew(((tmp)->content), sizeof(int)));
		free(tmp->content);
		tmp->content = NULL;
		*lst_a = (*lst_a)->next;
		free(tmp);
		tmp = NULL;
	}
}

void	rrb(t_list **lst_b)
{
	t_list	*tmp;

	tmp = *lst_b;
	if (ft_lstcount(*lst_b) > 1)
	{
		ft_lstaddend(lst_b, ft_lstnew(((tmp)->content), sizeof(int)));
		free(tmp->content);
		tmp->content = NULL;
		*lst_b = (*lst_b)->next;
		free(tmp);
		tmp = NULL;
	}
}

void	rrr(t_list **lst_a, t_list **lst_b)
{
	rra(lst_a);
	rra(lst_b);
}
