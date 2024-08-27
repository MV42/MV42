/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:27:30 by mavander          #+#    #+#             */
/*   Updated: 2024/08/22 15:27:31 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	mincount;
	int	nbr;

	i = 0;
	mincount = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mincount++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - 48;
		i++;
	}
	if (mincount % 2 != 0)
		nbr *= -1;
	return (nbr);
}
/*
int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
*/
