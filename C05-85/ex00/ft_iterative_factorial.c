/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <hderin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:43:00 by hderin            #+#    #+#             */
/*   Updated: 2023/04/08 10:43:03 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		faktoriyel;

	faktoriyel = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		faktoriyel *= nb;
		nb--;
	}
	return (faktoriyel);
}
