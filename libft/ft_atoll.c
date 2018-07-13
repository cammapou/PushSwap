/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:00:24 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 12:57:34 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	  ft_atoll(const char *str)
{
  long long int i;
  long long res;
  int neg;

  i = 0;
  res = 0;
  while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
    i++;
  neg = i;
  if (str[i] == '-' || str[i] == '+')
    i++;
  while(str[i] >= '0' && str[i] <= '9')
  {
    res = res * 10 + (str[i] - 48);
    i++;
  }
  if(str[neg] == '-')
    return(-res);
  return(res);
}
