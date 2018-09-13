/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:42:55 by cammapou          #+#    #+#             */
/*   Updated: 2018/08/23 14:02:53 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void		pushswap(t_list **lst_a, int min)
{
	t_list		*lst_b;
	int			tmp;
	int			*tab;
	int			med;

	lst_b = ft_lstnew(NULL, sizeof(int));
	if (ft_lstcount(*lst_a) > 3 && ft_lstcount(*lst_a) <= 5)
	{
		tab = convert_tab(*lst_a);
		tri_rapide(tab, ft_lstcount(*lst_a), tmp);
		med = tab[ft_lstcount(*lst_a) / 2];
		free(tab);
	}
	if (ft_lstcount(*lst_a) <= 3)
		algomin(lst_a);
	else if (ft_lstcount(*lst_a) > 3 && ft_lstcount(*lst_a) <= 5)
		small_quick(lst_a, &lst_b, min, med);
	else
		sort(lst_a, &lst_b);
	ft_lstdel(&lst_b, del);
}

static void		init(char **av, int ac)
{
	t_list		*lst;
	int			*i;
	int			min;

	min = 0;
	if ((((i = (int*)malloc(sizeof(int *))) == NULL)))
		return ;
	*i = ft_atoi(av[--ac]);
	lst = ft_lstnew(i, sizeof(int));
	while (ac-- > 1)
	{
		*i = ft_atoi(av[ac]);
		ft_lstaddend(&lst, ft_lstnew(i, sizeof(int)));
	}
	if (!io(lst))
		pushswap(&lst, min);
	free(i);
	ft_lstdel(&lst, del);
}

int				main(int ac, char **av)
{
	if (ac <= 1)
		ft_putendl("usage: ./push_swap 6 4 7 3");
	if ((error_check(av)) == -1)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	else
		init(av, ac);
	return (0);
}
