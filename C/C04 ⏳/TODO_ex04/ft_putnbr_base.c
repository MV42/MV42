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

char	*ft_convert_base(char *str, char *base)
{
	int	i;
	int	bsize;

	i = 0;
	while (base[i])
		i++;
	bsize = i;
	i = 0;
	while (str[i])
	{
		ft_putchar(base[str[i] / bsize]);
		ft_putchar(base[str[i] % bsize]);
		i++;
	}
}

char	*ft_itoa(int nb)
{
	if (nb < 0)
		str[0] = '-';
	if (nb > 9)
	{
		ft_itoa(nb / 10);
		ft_itoa(nb % 10);
	}
	if (nv >= 0 && nb <= 9)
		str[i]
}
/*
int	main(void)
{
	ft_putnbr(-4208970);
	return (0);
}
*/
