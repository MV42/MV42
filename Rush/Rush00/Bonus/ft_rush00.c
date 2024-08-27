/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:44:25 by mavander          #+#    #+#             */
/*   Updated: 2024/08/10 15:43:08 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printline(int max_x, char a, char b, char c)
{
	int	i_x;

	i_x = 0;
	while (i_x <= max_x)
	{
		if (i_x++ == 0)
			write(1, &a, 1);
		while (i_x++ < (max_x - 1))
			write(1, &b, 1);
		if (i_x++ == max_x)
			write(1, &c, 1);
	}
	write(1, "\n", 1);
}

void	ft_rush(int max_x, int max_y, char *symb)
{
	int	i_y;

	i_y = 0;
	while (i_y <= max_y)
	{
		if (i_y++ == 0)
			ft_printline(max_x, symb[0], symb[1], symb[2]);
		while (i_y++ < (max_y - 1))
			ft_printline(max_x, symb[3], symb[4], symb[5]);
		if (max_y > 1 && i_y++ == max_y)
			ft_printline(max_x, symb[6], symb[7], symb[8]);
	}
	write(1, "\n", 1);
}
