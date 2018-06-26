/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:42:55 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 19:12:41 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int ac, char **av)
{
	t_list	*lst_a;
	t_list	*lst_b;
	t_ev	*ev;

	lst_b = NULL;
	if (ac <= 1)
	{
		ft_putendl("usage: ARG= 4 67 3; ./push_swap $ARG | ./checker $ARG");
		return (0);
	}
	if (!(ev = ft_memalloc(sizeof(t_ev))))
		return (-1);
	ft_bzero(ev, sizeof(ev));
	if ((ft_error_check(ac, av)) == -1)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	ft_check_flags(ev, av);
	if (ft_init_pile(&lst_a, ac, av) == 0)
		return (-1);
	ft_pushswap(ev, &lst_a, &lst_b);
	//ft_print_lst_a(lst_a);
	//ft_print_lst_b(lst_b);
	ft_stack_clear(&lst_a);
	return (0);
}
