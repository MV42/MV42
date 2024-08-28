/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:27:22 by mavander          #+#    #+#             */
/*   Updated: 2024/08/22 15:27:24 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_verif(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j]
				|| base[i] == '-' || base[i] == '+'
				|| base[j] == '-' || base[j] == '+'
				|| base[i] <= 32 || base[i] >= 127
				|| base[j] <= 32 || base[j] >= 127)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;
	long int		nb;

	len = ft_strlen(base);
	nb = (long int)nbr;
	if (!base_verif(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr_base(nb, base);
	}
	else if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
		ft_putnbr_base(nb % len, base);
	}
	else if (nb >= 0 && nb < len)
		ft_putchar(base[nb]);
}
/*
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
*/
