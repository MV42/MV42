/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:29:01 by mavander          #+#    #+#             */
/*   Updated: 2024/08/08 17:57:12 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	resdiv;
	int	resmod;
	int	*div;
	int	*mod;

	a = 85;
	b = 2;
	resdiv = 0;
	resmod = 0;
	div = &resdiv;
	mod = &resmod;
	printf("%d\n", resdiv);
	printf("%d\n", resmod);
	ft_div_mod(a, b, div, mod);
	printf("%d\n", resdiv);
	printf("%d\n", resmod);
	return (0);
}
*/
