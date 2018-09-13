/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:48:10 by cammapou          #+#    #+#             */
/*   Updated: 2018/08/23 13:08:26 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include "../printf/includes/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

/*
**			 Push_Swap
*/
void	sort(t_list **lst_a, t_list **lst_b);
void	small_quick(t_list **lst_a, t_list **lst_b, int min, int med);
int		io(t_list *lst);
int		iro(t_list *lst);
int		lastval(t_list *lst);
int		blastval(t_list *lst);
int		len_sort(t_list *lst, int nb);
int		check_val(t_list *lst, int nb);
void	quick_a(t_list **lst_a, t_list **lst_b);
void	select_b1(t_list **lst_a, t_list **lst_b, int med);
void	quick_b1(t_list **lst_a, t_list **lst_b, int med, int i);
int		quick_b1a(t_list **lst_a, t_list **lst_b, int med, int i);
int		quick_b1b(t_list **lst_a, t_list **lst_b, int med, int i);
void	quick_b1c(t_list **lst_a, t_list **lst_b, int med, int i);
void	select_b2(t_list **lst_a, t_list **lst_b, int med);
void	quick_b2(t_list **lst_a, t_list **lst_b, int med, int i);
void	select_b3(t_list **lst_a, t_list **lst_b);
void	algomin(t_list **lst_a);
/*
**				Checker
*/
int		checker(t_list **lst);
int		io(t_list *lst_a);
void	del(void *content, size_t content_size);
/*
**				Instructions
*/
void	sa(t_list **lst_a);
void	sb(t_list **lst_b);
void	ss(t_list **lst_a, t_list **lst_b);
void	pa(t_list *lst_a, t_list *lst_b);
void	pb(t_list *lst_a, t_list *lst_b);
void	ra(t_list **lst_a);
void	rb(t_list **lst_b);
void	rr(t_list **lst_a, t_list **lst_b);
void	rra(t_list **lst_a);
void	rrb(t_list **lst_b);
void	rrr(t_list **lst_a, t_list **lst_b);
/*
**			 Error
*/
int		check_doublon(char **av);
int		check_int(char **av);
int		alpha(char **av);
int		error_check(char **av);
/*
**			 Define_mediane
*/
int		*convert_tab(t_list *lst_a);
int		*tri_rapide(int *tab, int taille, int tmp);
#endif
