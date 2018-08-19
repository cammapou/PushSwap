/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_med.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:00:24 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/17 16:36:56 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		*convert_tab(t_list *lst_a)
{
	t_list	*tmp;
	int		*tab;
	size_t	i;

	if (!(tab = ft_tabnew(ft_lstcount(lst_a))))
		return (NULL);
	i = 0;
	tmp = lst_a;
	while (tmp)
	{
		tab[i] = *(int*)tmp->content;
		i++;
		tmp = tmp->next;
	}
	return (tab);
}

int	*tri_rapide(int *tab, int taille)
{
	int	mur;
	int	courant;
	int	pivot;
	int	tmp;

	mur = 0;
	courant = -1;
	if (taille < 2)
		return (0);
	pivot = tab[taille - 1];
	while (++courant < taille)
	{
		if (tab[courant] <= pivot)
		{
			if (mur != courant)
			{
				tmp = tab[courant];
				tab[courant] = tab[mur];
				tab[mur] = tmp;
			}
			mur++;
		}
	}
	tri_rapide(tab, mur - 1);
	tri_rapide(tab + mur - 1, taille - mur + 1);
	return(tab);
}
