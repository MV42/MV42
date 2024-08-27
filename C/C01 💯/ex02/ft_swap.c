/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:41:10 by mavander          #+#    #+#             */
/*   Updated: 2024/08/08 17:27:46 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	nbr1;
	int	nbr2;
	int	*a;
	int	*b;

	nbr1 = 2;
	nbr2 = 4;
	a = &nbr1;
	b = &nbr2;
	printf("%d%d\n", nbr1, nbr2);
	ft_swap(a, b);
	printf("%d%d\n", nbr1, nbr2);
	return(0);
}
*/
