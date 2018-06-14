/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:54:12 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 16:06:30 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void ft_quick_b1(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int max;

    med = ft_check_med2(lst_b);
    ev->len_b = ft_stack_len_b(*lst_b);
    while (ev->len_b)
    {
        ev->len_b = ft_stack_len_b(*lst_b);
        if (*(int*)(*lst_b)->content == ft_max_value(*lst_b))
        {
            ft_pa(lst_a, lst_b);
            printf("pa\n");
            //ft_print_lst_a(*lst_a);
            //ft_print_lst_b(*lst_b);
        }
        else
            ft_rb(lst_b);
            printf("rb\n");
        ev->len_b--;
    }
}



void ft_small(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int len_b;

    while (1)
    {
        while (ft_check_val(*lst_a, ev->med) == -1)
        {
            ev->len_a = ft_stack_len_a(*lst_a);
            if (ev->len_a == 3)
                break ;
            if (*(int*)(*lst_a)->content < ev->med)
            {
                ft_pb(lst_a, lst_b);
                ft_printf("pb\n");
                //ft_print_lst_a(*lst_a);
                //ft_print_lst_b(*lst_b);
            }
            else
            {
                ft_ra(lst_a);
                ft_printf("ra\n");
                //ft_print_lst_a(*lst_a);
               //ft_print_lst_b(*lst_b);
            }
            len_b = ft_stack_len_b(*lst_b);
            if (len_b >= 2)
            {
                if (*((int*)(*lst_b)->content) < *((int*)(*lst_b)->next->content))
                {
                    ft_sb(lst_b);
                    ft_printf("sb\n");
                    //ft_print_lst_a(*lst_a);
                    //ft_print_lst_b(*lst_b);
                }
            }
        }
        ev->med++;
        if (ev->len_a == 3)
            ft_algomin(lst_a);
        if (ev->len_a == 3)
        {
            break ;
        }
   }
   //ft_quick_b1(ev, lst_a, lst_b);
}

void ft_quick_b3(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len_b;
    int med2;
    int max;

    med = ft_check_med(lst_a);
    while (ft_check_val(*lst_a, med) == -1)
    {
        if (*(int*)(*lst_a)->content < med)
        {
            ft_pb(lst_a, lst_b);
            ft_printf("pb\n");
            //ft_print_lst_a(*lst_a);
            //ft_print_lst_b(*lst_b);
        }
        else
        {
            ft_ra(lst_a);
            ft_printf("ra\n");
        //    ft_print_lst_a(*lst_a);
        //    ft_print_lst_b(*lst_b);
        }
        len_b = ft_stack_len_b(*lst_b);
        if (len_b >= 2)
        {
            if (*((int*)(*lst_b)->content) < *((int*)(*lst_b)->next->content))
            {
                ft_sb(lst_b);
                ft_printf("sb\n");
            }
        }
    }
    ft_small(ev, lst_a, lst_b);
}

void ft_quick_b2(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len_b;
    int med2;
    int max;

    med = ft_check_med2(lst_a);
    while (ft_check_val(*lst_a, med) == -1)
    {
        if (*(int*)(*lst_a)->content < med)
        {
            ft_pb(lst_a, lst_b);
            ft_printf("pb\n");
            //ft_print_lst_a(*lst_a);
            //ft_print_lst_b(*lst_b);
        }
        else
        {
            ft_ra(lst_a);
            ft_printf("ra\n");
        //    ft_print_lst_a(*lst_a);
        //    ft_print_lst_b(*lst_b);
        }
        len_b = ft_stack_len_b(*lst_b);
        if (len_b >= 2)
        {
            if (*((int*)(*lst_b)->content) < *((int*)(*lst_b)->next->content))
            {
                ft_sb(lst_b);
                ft_printf("sb\n");
            }
        }
    }
    ft_quick_b3(ev, lst_a, lst_b);
}


void ft_quick(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int max;
    int len_b;

    max = ft_max_value(*lst_a);
    med = ft_check_med(lst_a);
        while (ft_check_val(*lst_a, med) == -1)
        {
            if (*(int*)(*lst_a)->content < med)
            {
                ft_pb(lst_a, lst_b);
                ft_printf("pb\n");
                //ft_print_lst_a(*lst_a);
                //ft_print_lst_b(*lst_b);
            }
            else
            {
                ft_ra(lst_a);
                ft_printf("ra\n");
            //    ft_print_lst_a(*lst_a);
            //    ft_print_lst_b(*lst_b);
            }
            len_b = ft_stack_len_b(*lst_b);
            if (len_b >= 2)
            {
                if (*((int*)(*lst_b)->content) < *((int*)(*lst_b)->next->content))
                {
                    ft_sb(lst_b);
                    ft_printf("sb\n");
                }
            }
        }
        ft_quick_b2(ev, lst_a, lst_b);
}
