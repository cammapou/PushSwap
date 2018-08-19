/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 10:53:20 by cammapou          #+#    #+#             */
/*   Updated: 2017/11/23 10:54:12 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_tabnew(size_t size)
{
	int	*str;

	if (!(str = (int*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
