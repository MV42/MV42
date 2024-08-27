/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:06:53 by mavander          #+#    #+#             */
/*   Updated: 2024/08/18 23:06:55 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	row_check(int **tab, int size)
{
	int	j;
	int	i1;
	int	i2;

	j = 0;
	while (j < size)
	{
		i1 = 0;
		while (i1 < size)
		{
			i2 = i1 + 1;
			while (i2 < size)
			{
				if (tab[j][i1] == tab[j][i2])
					return (0);
				i2++;
			}
			i1++;
		}
		j++;
	}
	return (1);
}

int	col_check(int	**tab, int size)
{
	int	j;
	int	i1;
	int	i2;

	j = 0;
	while (j < size)
	{
		i1 = 0;
		while (i1 < size)
		{
			i2 = i1 + 1;
			while (i2 < size)
			{
				if (tab[i1][j] == tab[i2][j])
					return (0);
				i2++;
			}
			i1++;
		}
		j++;
	}
	return (1);
}

int	tab_verif(int **tab, int size)
{
	if (!row_check(tab, size) || !col_check(tab, size))
		return (0);
	return (1);
}
