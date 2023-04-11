/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <hderin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 09:17:44 by hderin            #+#    #+#             */
/*   Updated: 2023/04/11 17:26:53 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dup;

	dup = (int *)malloc((max - min + 1) * sizeof(int));
	if (min >= max)
		return (NULL);
	if (!dup)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		dup[i] = min;
		min++;
		i++;
	}
	return (dup);
}
