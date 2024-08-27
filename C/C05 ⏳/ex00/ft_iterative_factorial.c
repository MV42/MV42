/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:17:22 by mavander          #+#    #+#             */
/*   Updated: 2024/08/25 04:17:26 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb < 0)
		res = 0;
	while (nb > 0)
		res *= nb--;
	return (res);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i\n", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/
