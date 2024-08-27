/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:17:59 by mavander          #+#    #+#             */
/*   Updated: 2024/08/25 04:18:01 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power --;
	}
	return (nb);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
