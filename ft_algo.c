/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:54:12 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/09 15:42:46 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void ft_quick_b2(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int med2;
    int max;

    med = ft_check_med(lst_a);
    printf("med =%d\n", med);
    while (ft_check_val(*lst_a, med) == -1)
    {
        //printf("med =%d\n", med);
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
    }
    ft_quick_b1(ev, lst_a, lst_b);
}

void ft_quick_b1(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int med2;
    int max;

    med = ft_check_med(lst_b);
    printf("med2 =%d\n", med);
    while (ft_check_val2(*lst_b, med) == -1)
    {
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
    }
    //ft_quick_b2(ev, lst_a, lst_b);
}

void ft_quick_3(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int max;
    int len_b;

    max = ft_max_value(*lst_a);

    med = ft_check_med(lst_a);
    //printf("med =%d\n", med);
        while (ft_check_val(*lst_a, med) == -1)
        {
            if (len == 3)
                break;
            //printf("med =%d\n", med);
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
              // ft_print_lst_a(*lst_a);
              // ft_print_lst_b(*lst_b);
            }
            len_b = ft_stack_len_b(*lst_b);
            //printf("%d\n", len_b);
            if (len_b > 2)
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
        ft_quick_b2(ev, lst_a, lst_b);
}

void ft_quick_b(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int med2;
    int max;

    med = ft_check_med(lst_b);
    while (ft_check_val2(*lst_b, med) == -1)
    {
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
    }
    //ft_quick_3(ev, lst_a, lst_b);
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
            if (len == 3)
                break;
            //printf("med =%d\n", med);
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
        }
        ft_quick_b(ev, lst_a, lst_b);
}
