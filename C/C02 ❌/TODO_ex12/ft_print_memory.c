/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:22:27 by mavander          #+#    #+#             */
/*   Updated: 2024/08/25 17:22:35 by mavander         ###   ########.fr       */
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

void	*ft_print_memory(void *addr, unsigned int size)
{
	ft_putstr(&addr[0]);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_memory(argv[1]);
}
