/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:19:43 by mavander          #+#    #+#             */
/*   Updated: 2024/08/27 02:19:44 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
void	ft_putchar(char c);
int	base_verif(char *base);
int	char_is_base(char c, char *base);

int	ft_nbrlen(int nbr, int blen)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
		ft_nbrlen(nbr, blen);
	}
	else if (nbr >= blen)
	{
		ft_nbrlen(nbr / blen, blen);
		ft_nbrlen(nbr % blen, blen);
	}
	else if (nbr >= 0 && nbr < blen)
		len++;
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sub0;
	int	nbr;
	int	len;

	if (!base_verif(base))
		return (0);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sub0 = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sub0 *= -1;
	nbr = 0;
	len = ft_strlen(base);
	while (str[i])
	{
		if (char_is_base(str[i], base) < 0)
			return (0);
		nbr *= len;
		nbr += char_is_base(str[i++], base);
	}
	return (nbr * sub0);
}

char	*ft_itoa_base(int nbr, char *base, int i, int blen)
{
	long int		nb;

	nb = (long int)nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_itoa_base(nb, base, i);
	}
	else if (nb >= blen)
	{
		ft_itoa_base(nb / blen, base, i);
		ft_itoa_base(nb % blen, base, i);
	}
	else if (nb >= 0 && nb < blen)
		str[i++] = base[nb];
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	unsigned int	blen;
	char				*str;

	blen = ft_strlen(base);
	if (!base_verif(base))
		return (0);
	str = (char *)malloc((ft_nbrlen(nbr, blen) + 1) * sizeof(char));
	i = 0;
	return(ft_itoa_base(ft_atoi_base(nbr, base_from), base_to, i));
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
