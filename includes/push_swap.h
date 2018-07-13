/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:48:10 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 19:25:39 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../printf/includes/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct		s_ev
{
	int				*tmp;
	int				len_a;
	int				len_b;
	int				max;
	int				med;
	int 			med2;
	int				*min;
	int				flagV;
	int				flagC;
}					t_ev;

/*
**
*/
int 	ft_check_cr(char **av, int ac);

int					ft_pushswap(t_ev *ev, t_list **lst_a, t_list **lst_b);
/*
**				Sort
*/
void				ft_sort(t_ev *ev, t_list **lst_a, t_list **lst_b);
int 				ft_quick(t_ev *ev, t_list **lst_a, t_list **lst_b);
void 				ft_quick_b1(t_ev *ev, t_list **lst_a, t_list **lst_b);
int					ft_quick_b1a(t_list **lst_a, t_list **lst_b, int med, int i);
int					ft_quick_b1b(t_list **lst_a, t_list **lst_b, int med, int i);
void				ft_quick_b1c(t_list **lst_a, t_list **lst_b, int med, int i);
void 				ft_quick_b2(t_ev *ev, t_list **lst_a, t_list **lst_b, int med, int i);
void 				ft_select_b1(t_ev *ev, t_list **lst_a, t_list **lst_b);
int 				ft_quick_b3(t_ev *ev, t_list **lst_a, t_list **lst_b, int med, int i);
void 				ft_quick_b4(t_ev *ev, t_list **lst_a, t_list **lst_b, int med, int i);
void				ft_select_b3(t_list **lst_a, t_list **lst_b);
/*
**				Algo_min
*/
void				ft_algomin(t_list **lst_a);
void				ft_small_pa(t_ev *ev, t_list **lst_a, t_list **lst_b);
void				ft_small_quick(t_ev *ev, t_list **lst_a, t_list **lst_b);
void				ft_quick_min(t_ev *ev, t_list **lst_a, t_list **lst_b);
void				ft_suite_pa(t_list **lst_a, t_list **lst_b, int c);
/*
**				Utils
*/
int					ft_alpha(char **av, int ac);
int 				ft_int(char **av, int ac);
int					ft_check_med(t_list **lst_a);
void				ft_check_flags(t_ev *ev, char	**av);
int					ft_error_check(int ac, char **av);
int					ft_check_doublon(char **av);
int					ft_init_pile(t_list **lst_a, int ac, char **av);
void				ft_print_lst_a(t_list *lst_a);
void				ft_print_lst_b(t_list *lst_b);
/*
**				Checker
*/
int					ft_checker(t_list *lst_a, int ac, char **av);
int					ft_checkop(t_list *lst_a, t_list *lst_b, char *buf);
/*
**				Instruction
*/
void				ft_sa(t_list **lst_a);
void				ft_sb(t_list **lst_b);
void				ft_ss(t_list **lst_a, t_list **lst_b);
void				ft_pa(t_list **lst_a, t_list **lst_b);
void				ft_pb(t_list **lst_a, t_list **lst_b);
void				ft_ra(t_list **lst_a);
void				ft_rb(t_list **lst_b);
void				ft_rr(t_list **lst_a, t_list **lst_b);
void				ft_rra(t_list **lst_a);
void				ft_rrb(t_list **lst_b);
/*
**				Tools
*/
int					ft_check(t_list *lst);
int					ft_check_val2(t_list *lst_b, int nbr);
void				ft_stack_clear(t_list **begin_list);
int					ft_check_val(t_list *lst_a, int nbr);
int					ft_minval(t_list	*lst_a);
int					ft_maxval(t_list *lst_a);
int					ft_len_sort(t_list *lst, int nb);
int					ft_count(t_list *lst, int nb);
int					ft_check_stack(t_list *lst_a);
int					ft_check_stack2(t_list *lst_a);
int					ft_stack_cr(t_list *lst_a);
#endif
