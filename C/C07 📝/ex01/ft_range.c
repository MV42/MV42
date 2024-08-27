/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:12:52 by mavander          #+#    #+#             */
/*   Updated: 2024/08/26 01:12:54 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	if (min >= max)
		return (0);
	i = min - 1;
	len = 0;
	while (i++ < max)
		len++;
	tab = (int *)malloc(len * sizeof(int));
	i = 0;
	while (i <= len)
		tab[i++] = min++;
	return (tab);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		int *tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (i < atoi(argv[2]) - atoi(argv[1]))
			printf("%i ", tab[i++]);
		printf("\n");
	}
}
