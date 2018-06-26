/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:00:24 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/14 12:57:34 by cammapou         ###   ########.fr       */
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

int		ft_alpha(char *av)
{
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	//while (av[j])
	//{
		printf("%c\n", av[j]);
		while (av[i++])
		{
			printf("%c\n", av[i]);
			if ((av[i] >= 'A' && av[i] <= 'Z') || (av[i] >= 'a' && av[i] <= 'z'))
			{
				printf("ici\n");
				return (-1);
			}
			//i++;
		}
	//	j++;
	//	i = 1;
//	}
	return (0);
}

int		ft_error_check(int ac, char **av)
{
	int	i;

	i = ;
	//if (ft_alpha(av[i]) == -1)
	//	return (-1);
	else if (ft_check_doublon(&av[i]) == -1)
		return (-1);
	return (0);
}
