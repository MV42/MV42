/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:06:12 by mavander          #+#    #+#             */
/*   Updated: 2024/08/18 23:06:19 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	argc_check(int argc)
{
	if (argc != 2)
		return (0);
	return (1);
}

int	numcount(char *arg1)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arg1[i])
	{
		if (i % 2 == 0 && (arg1[i] < '1' || arg1[i] > '9'))
			return (0);
		if (i % 2 == 1 && arg1[i] != ' ')
			return (0);
		if (arg1[i] >= '1' && arg1[i] <= '9')
			count++;
		i++;
	}
	return (count);
}

int	size_check(int count)
{
	if (count % 4 != 0 || count / 4 > 9 || count / 4 < 4)
		return (0);
	return (count / 4);
}

int	input_check(int argc, char **argv)
{
	if (!argc_check(argc) || !size_check(numcount(argv[1])))
		return (0);
	return (1);
}
