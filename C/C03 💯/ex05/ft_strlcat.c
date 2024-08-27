/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:25:46 by mavander          #+#    #+#             */
/*   Updated: 2024/08/19 15:25:47 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	t;

	i = 0;
	t = (unsigned int)ft_strlen(dest);
	if (t > size)
		t = size;
	while (t + i < size - 1 && size && src[i])
	{
		dest[t + i] = src[i];
		i ++;
	}
	if (size > t)
		dest[t + i] = '\0';
	i = (unsigned int)ft_strlen(src);
	return (t + i);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n",ft_strlcat(argv[1], argv[2], atoi(argv[3])));
		printf("%s\n", argv[1]);
	}
	return (0);
}
*/
