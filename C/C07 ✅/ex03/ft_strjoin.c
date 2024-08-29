/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:19:10 by mavander          #+#    #+#             */
/*   Updated: 2024/08/27 02:19:12 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_writestrs(int size, char **strs, char *sep, char *str)
{
	int	i1;
	int	i2;
	int	j;

	j = 0;
	i2 = 0;
	while (j < size)
	{
		i1 = 0;
		while (strs[j][i1])
			str[i2++] = strs[j][i1++];
		i1 = 0;
		if (j != size - 1)
			while (sep[i1])
				str[i2++] = sep[i1++];
		j++;
	}
	str[i2] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		j;
	char	*str;

	j = 0;
	if (size <= 0)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\n';
		return (str);
	}
	while (j < size)
		len += ft_strlen(strs[j++]);
	len += ft_strlen(sep) * (size - 1);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (ft_writestrs(size, strs, sep, str));
}

int	main(int argc, char **argv)
{
	char	**strs;
	int		j;
	int		i;
	char	*str;

	j = 1;
	i = 0;
	if (argc >= 1)
	{
		strs = (char **)malloc((argc - 2) * sizeof(char *));
		while (j <= argc - 2)
			strs[i++] = argv[j++];
		str = ft_strjoin(argc - 2, strs, argv[argc - 1]);
		printf("%s\n", str);
		free(str);
		free(strs);
	}
}
