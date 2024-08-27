/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:18:46 by mavander          #+#    #+#             */
/*   Updated: 2024/08/25 04:18:47 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb <= 1)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i --;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i\n", ft_is_prime(atoi(argv[1])));
	return (0);
}
*/
