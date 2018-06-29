/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:42:55 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 13:15:06 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*static SDL_Window	*verbose(t_list **lst_a, t_list **lst_b, int *v_fl)
{
	static SDL_Renderer	*render;
	static SDL_Window	*window;

	if (ft_lstcount(*lst_a) + ft_lstcount(*lst_b) < 1900)
	{
		if (*v_fl && window == NULL)
		{
			if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
			{
				ft_printf("Error\n");
				return (NULL);
			}
			window = SDL_CreateWindow("PushSwap", 0, 0, 1920, 800, 0);
			render = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
			if (!window || !render)
			{
				ft_printf("Error\n");
				SDL_Quit();
				return (NULL);
			}
		}
		w_draw(render, *lst_a, *lst_b);
		SDL_Delay(LATENCY);
	}
	return (window);
}*/

int		ft_stack_cr(t_list *lst_a)
{
	int			*nbr_tmp;
	t_list		*tmpstack;

	tmpstack = lst_a;
	nbr_tmp = (int*)tmpstack->content;
	while (tmpstack->next)
	{
		if (*nbr_tmp > *(int*)tmpstack->next->content)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = (int*)tmpstack->content;
	}
	return (0);
}
int		ft_checkop(t_list *lst_a, t_list *lst_b, char *buf)
{
	ft_strcmp(buf, "sa") == 0 ? ft_sa(&lst_a) : 0;
	ft_strcmp(buf, "sb") == 0 ? ft_sb(&lst_b) : 0;
	ft_strcmp(buf, "ss") == 0 ? ft_ss(&lst_a, &lst_b) : 0;
	ft_strcmp(buf, "pa") == 0 ? ft_pa(&lst_a, &lst_b) : 0;
	ft_strcmp(buf, "pb") == 0 ? ft_pb(&lst_a, &lst_b) : 0;
	ft_strcmp(buf, "ra") == 0 ? ft_ra(&lst_a) : 0;
	ft_strcmp(buf, "rb") == 0 ? ft_rb(&lst_b) : 0;
	ft_strcmp(buf, "rr") == 0 ? ft_rr(&lst_a, &lst_b) : 0;
	ft_strcmp(buf, "rra") == 0 ? ft_rra(&lst_a) : 0;
	ft_strcmp(buf, "rrb") == 0 ? ft_rrb(&lst_b) : 0;
	return (0);
}

int		ft_checker(t_list *lst_a, int ac, char **av)
{
	char	*buf;
	t_list	*lst_b;

	lst_b = NULL;
	buf = NULL;
	while (get_next_line(0, &buf) > 0)
	{

		if (ft_checkop(lst_a, lst_b, buf) == -1)
		{
			free(buf);
			ft_putendl_fd("Error", 2);
			return (-1);
		}
	}
	if (ft_stack_cr(lst_a))//&& !(lst_b)->content)
		ft_printf("KO");
	else
		ft_printf("OK");
	return (0);
}
