/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:42:23 by mavander          #+#    #+#             */
/*   Updated: 2024/08/13 18:42:40 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("src:\t%s\n", argv[2]);
//		printf("FT:\t%s\n", ft_strncpy(argv[1], argv[2], atoi(argv[3])));
		printf("OG:\t%s\n", strncpy(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
*/
