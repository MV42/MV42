/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:18:46 by mavander          #+#    #+#             */
/*   Updated: 2024/08/27 02:18:48 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;

	n = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
		range[0][i++] = min++;
	return (max - n);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	int	*tab;

	i = 0;
	if (argc == 3)
	{
		printf("%i\n", ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2])));
		while (i < atoi(argv[2]) - atoi(argv[1]))
			printf("%i ", tab[i++]);
		printf("\n");
	}
}
*/
