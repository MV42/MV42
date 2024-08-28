/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:46:17 by mavander          #+#    #+#             */
/*   Updated: 2024/08/13 15:19:41 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("src:\t%s\n", argv[2]);
//		printf("FT:\t%s\n", ft_strcpy(argv[1], argv[2], atoi(argv[3])));
		printf("OG:\t%s\n", strcpy(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
*/
