/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:32:53 by cammapou          #+#    #+#             */
/*   Updated: 2018/08/23 13:03:20 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int				io(t_list *lst_a)
{
	while (lst_a->next)
	{
		if ((*(int*)lst_a->next->content) > (*(int*)lst_a->content))
			return (0);
		lst_a = lst_a->next;
	}
	return (1);
}

static int		check_instru(char *instruct)
{
	int			check;

	check = 0;
	(!ft_strcmp(instruct, "sa")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "sb")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "ss")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "pa")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "pb")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "ra")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "rb")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "rr")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "rra")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "rrb")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "rrr")) ? check = 1 : 0;
	(!ft_strcmp(instruct, "")) ? check = 1 : 0;
	if (check == 1)
		return (1);
	return (0);
}

static int		read_instru(t_list **lst_a, t_list **lst_b, char *instruct)
{
	if (check_instru(instruct))
	{
		(!ft_strcmp(instruct, "sa")) ? sa(lst_a) : 0;
		(!ft_strcmp(instruct, "sb")) ? sb(lst_b) : 0;
		(!ft_strcmp(instruct, "ss")) ? ss(lst_a, lst_b) : 0;
		(!ft_strcmp(instruct, "pa")) ? pa(*lst_a, *lst_b) : 0;
		(!ft_strcmp(instruct, "pb")) ? pb(*lst_a, *lst_b) : 0;
		(!ft_strcmp(instruct, "ra")) ? ra(lst_a) : 0;
		(!ft_strcmp(instruct, "rb")) ? rb(lst_b) : 0;
		(!ft_strcmp(instruct, "rr")) ? rr(lst_a, lst_b) : 0;
		(!ft_strcmp(instruct, "rra")) ? rra(lst_a) : 0;
		(!ft_strcmp(instruct, "rrb")) ? rrb(lst_b) : 0;
		(!ft_strcmp(instruct, "rrr")) ? rrr(lst_a, lst_b) : 0;
	}
	else
		return (0);
	return (1);
}

int				checker(t_list **lst_a)
{
	t_list		*lst_b;
	char		**line;

	if ((line = (char **)malloc(sizeof(char *))) == NULL)
		return (0);
	lst_b = ft_lstnew(NULL, sizeof(int));
	while (get_next_line(0, line))
	{
		if (!read_instru(lst_a, &lst_b, *line) || !ft_strcmp(*line, ""))
		{
			ft_putendl("error");
			free(*line);
			return (0);
		}
		free(*line);
	}
	(io(*lst_a)) ? ft_putendl("OK") : ft_putendl("KO");
	ft_lstdel(&lst_b, del);
	free(line);
	return (0);
}
