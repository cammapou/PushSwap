/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toolstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 15:48:33 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_min_value(t_list *lst)
{
	t_list	*tmp;
	int		*min;

	if (!lst->content)
		return (0);
	min = lst->content;
	tmp = lst->next;
	while (tmp)
	{
		if (*min > *(int*)tmp->content)
			min = (int*)tmp->content;
		tmp = tmp->next;
	}
	return (*min);
}

int		ft_max_value(t_list *lst)
{
	t_list	*tmp;
	int		*max;

	if (!lst->content)
		return (0);
	max = lst->content;
	tmp = lst->next;
	while (tmp)
	{
		if (*max < *(int*)tmp->content)
			max = (int*)tmp->content;
		tmp = tmp->next;
	}
	return (*max);
}

int		ft_stack_len_b(t_list *lst_b)
{
	size_t	len;

	len = 0;
	while (lst_b)
	{
		len++;
		lst_b = lst_b->next;
	}
	return (len);
	if (len == 0)
		return (0);
}

int		ft_stack_len_a(t_list *lst_a)
{
	int		len;

	len = 0;
	while (lst_a)
	{
		len++;
		lst_a = lst_a->next;
	}
	return (len);
	if (len == 0)
		return (0);
}

int		ft_stack_de(t_list *lst_a)
{
	int			*nbr_tmp;
	t_list		*tmpstack;

	tmpstack = lst_a;
	nbr_tmp = (int*)tmpstack->content;
	while (tmpstack->next)
	{
		if (*nbr_tmp < *(int*)tmpstack->next->content)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = (int*)tmpstack->content;
	}
	return (0);
}
