/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:07:12 by mavander          #+#    #+#             */
/*   Updated: 2024/08/18 23:07:14 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	tab_print(int **tab, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			write(1, &tab[x][y] + '0', 1);
			write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	write(1, "\n", 1);
}
