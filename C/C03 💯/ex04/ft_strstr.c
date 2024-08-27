/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:28:10 by mavander          #+#    #+#             */
/*   Updated: 2024/08/19 15:25:36 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if (argc)
	{
		printf("OG: %s\n", strstr(argv[1], argv[2]));
//		printf("FT: %s\n", ft_strstr(argv[1], argv[2]));
	}
	return (0);
}
*/
