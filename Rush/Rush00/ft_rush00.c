/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:44:25 by mavander          #+#    #+#             */
/*   Updated: 2024/08/10 15:43:08 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		if (str[i] == '-')
			mincount++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - 48;
	}
	if (mincount % 2 != 0)
		nbr *= -1;
	return (nbr);
}

void	ft_printline(int max_x, char a, char b, char c)
{
	int	i_x;

	i_x = 0;
	while (i_x <= max_x)
	{
		if (i_x++ == 0)
			write(1, &a, 1);
		while (i_x++ < (max_x - 1))
			write(1, &b, 1);
		if (i_x++ == max_x)
			write(1, &c, 1);
	}
	write(1, "\n", 1);
}

void	ft_rush(int max_x, int max_y, char *symb)
{
	int	i_y;

	i_y = 0;
	while (i_y <= max_y)
	{
		if (i_y++ == 0)
			ft_printline(max_x, symb[0], symb[1], symb[2]);
		while (i_y++ < (max_y - 1))
			ft_printline(max_x, symb[3], symb[4], symb[5]);
		if (max_y > 1 && i_y++ == max_y)
			ft_printline(max_x, symb[6], symb[7], symb[8]);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	max_x;
	int	max_y;

	max_x = ft_atoi(argv[1]);
	max_y = ft_atoi(argv[2]);
	if ((max_x < 1 || max_y < 1) || (argc < 4 || argc > 4))
		return (0);
	ft_rush(max_x, max_y, argv[3]);
	return (0);
}
/*
int	main(void)
{
	int	max_x;
	int	max_y;

	max_x = ft_atoi();
	max_y = ft_atoi();
	if (max_x < 1 || max_y < 1)
		return (0);
	ft_rush(max_x, max_y, "/-\\| |\\-/");
	return (0);
}
*/
