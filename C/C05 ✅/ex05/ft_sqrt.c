/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:18:35 by mavander          #+#    #+#             */
/*   Updated: 2024/08/25 04:18:36 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 2147395600)
		return (46340);
	if (nb > 2147395600)
		return (0);
	while (i * i < nb)
		i ++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/
