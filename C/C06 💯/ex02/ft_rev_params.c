/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:20:00 by mavander          #+#    #+#             */
/*   Updated: 2024/08/25 18:20:01 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			ft_putstr(argv[i--]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
