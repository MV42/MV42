/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:20:10 by mavander          #+#    #+#             */
/*   Updated: 2024/08/25 18:20:11 by mavander         ###   ########.fr       */
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

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap(char **argv, int i)
{
	char	*tmp;

	tmp = argv[i];
	argv[i] = argv[i + 1];
	argv[i + 1] = tmp;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i + 1])
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(argv, i);
				i = 0;
			}
			i++;
		}
		i = 1;
		while (argv[i])
		{
			ft_putstr(argv[i++]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
