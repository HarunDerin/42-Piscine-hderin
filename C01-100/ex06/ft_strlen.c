/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <hderin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 07:36:57 by hderin            #+#    #+#             */
/*   Updated: 2023/03/25 09:29:07 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		count;
	char	next_char;

	count = 0;
	while (true)
	{
		next_char = *str;
		if (next_char == '\0')
		{
			return (count);
		}
		count += 1;
		str++;
	}
}
