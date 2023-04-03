/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <hderin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:24:38 by hderin            #+#    #+#             */
/*   Updated: 2023/03/23 12:24:40 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	tersalfabe;

	tersalfabe = 'z';
	while (tersalfabe >= 'a')
	{
		write(1, &tersalfabe, 1);
		tersalfabe--;
	}	
}
