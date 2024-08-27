/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:42:22 by mavander          #+#    #+#             */
/*   Updated: 2024/08/18 22:42:25 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		input_check(int argc, char **argv);
int		numcount(char *arg1);
int		**tab_create(char *str, int size);
void	error_message(void);

int	main(int argc, char **argv)
{
	int	size;

	if (!input_check(argc, argv))
	{
		error_message();
		return (0);
	}
	size = numcount(argv[1]);
	tab_create(argv[1], size);
}
