/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool_sort2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:05:34 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/26 13:25:30 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			check_val(t_list *lst, int nb)
{
	int		count;

	count = 0;
	while (lst)
	{
		if (*((int*)lst->content) <= nb)
			count++;
		lst = lst->next;
	}
	return (count);
}

void		del(void *content, size_t content_size)
{
	(void)content_size;
	free(content);
}
