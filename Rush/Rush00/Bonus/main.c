/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:17:39 by mavander          #+#    #+#             */
/*   Updated: 2024/08/11 22:17:42 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rush(int max_x, int max_y, char *symb);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_whitespace(int i, char *str)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	ft_overflow(int nbr, int mincount)
{
	if (mincount % 2 == 1 && nbr < 0)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	long	nbr;
	int		i;
	int		mincount;

	i = 0;
	mincount = 0;
	nbr = 0;
	i = ft_whitespace(i, str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mincount++;
		i++;
	}
	if (mincount % 2 == 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - 48;
		if (nbr > 2147483647)
			return (0);
		i++;
	}
	return (nbr);
}

int	main(int argc, char **argv)
{
	int	max_x;
	int	max_y;

	max_x = ft_atoi(argv[1]);
	max_y = ft_atoi(argv[2]);
	if ((max_x < 1 || max_y < 1) || (argc < 4 || argc > 4))
		return (0);
	if (ft_strlen(argv[3]) != 9)
		return (0);
	ft_rush(max_x, max_y, argv[3]);
	return (0);
}
