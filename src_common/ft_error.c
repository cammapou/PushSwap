/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:00:24 by cammapou          #+#    #+#             */
/*   Updated: 2018/07/17 16:36:56 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_check_doublon(char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (av[j])
	{
		while (av[i])
		{
			if (ft_strcmp(av[i], av[j]) == 0 && i != j)
			{
				return (-1);
			}
			i++;
		}
		i = 1;
		j++;
	}
	return (0);
}

int		ft_int(char **av, int ac)
{
	int			i;
	long long	nb;

	i = 1;
	while (av[i])
	{
		nb = ft_atoll(av[i]);
		if (nb < INT_MIN || nb > (long long)INT_MAX)
			return (-1);
		if (nb > (long long)INT_MAX + 1)
			return (-1);
		i++;
	}
	return (0);
}

int		ft_alpha(char **av, int ac)
{
	int i;
	int j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != '-' && av[i][j] != '+')
				return (0);
			if ((av[i][j] == '-' || av[i][j] == '+') && j != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_error_check(int ac, char **av)
{
	int		i;

	i = 0;
	if (ft_check_doublon(&av[i]) == -1)
		return (-1);
	else if (ft_int(&av[i], ac) == -1)
		return (-1);
	else if (!ft_alpha(&av[i], ac))
		return (-1);
	return (0);
}
