/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:07:03 by mavander          #+#    #+#             */
/*   Updated: 2024/08/18 23:07:05 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	tab_write(int **tab, char *str, int size)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			tab[x][y] = str[i] - '0';
			i ++;
			x++;
		}
		y++;
	}
}

int	**tab_create(char *str, int size)
{
	int	**tab;
	int	i;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * size);
	while (i < size)
	{
		tab[i] = (int *)malloc(sizeof(int) * size);
		i++;
	}
	tab_write(tab, str, size);
	return (tab);
}
