/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:24:41 by mavander          #+#    #+#             */
/*   Updated: 2024/08/19 15:24:43 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("OG: %i\n", strcmp(argv[1], argv[2]));
		printf("FT: %i\n", ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}
*/
