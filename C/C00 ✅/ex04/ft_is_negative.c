/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:50:14 by mavander          #+#    #+#             */
/*   Updated: 2024/08/08 11:09:36 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	if (n < 0)
		write(1, "N", 1);
}
/*
int	main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(0);
	ft_is_negative(-0);
	return (0);
}
*/
