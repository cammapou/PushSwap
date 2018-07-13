/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:46:01 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 12:59:24 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_lst_a(t_list *lst_a)
{
	if (lst_a)
	{
		while (lst_a)
		{
			ft_printf(" lst_a = %d\n", *((int*)lst_a->content));
			lst_a = lst_a->next;
		}
		ft_printf("\n");
	}
	else
		return ;
}

void	ft_print_lst_b(t_list *lst_b)
{
	if (lst_b)
	{
		while (lst_b)
		{
			ft_printf("lst_b = %d\n", *((int*)lst_b->content));
			lst_b = lst_b->next;
		}
		ft_printf("\n");
	}
	else
		return ;
}

int		ft_init_pile(t_list **lst_a, int ac, char **av)
{
	int		*i;
	t_list	*new;

	if (!(i = (int*)malloc(sizeof(int))))
		return (0);
	while (ac > 1)
	{
		*i = ft_atoi(av[ac - 1]);
		if (!lst_a)
		{
			if (!(*lst_a = ft_lstnew(i, sizeof(int))))
				return (0);
		}
		else
		{
			if (!(new = ft_lstnew(i, sizeof(int))))
				return (0);
			ft_lstadd(lst_a, new);
		}
		ac--;
	}
	free(i);
	return (1);
}
