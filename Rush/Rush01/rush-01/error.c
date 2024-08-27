/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavander <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:06:33 by mavander          #+#    #+#             */
/*   Updated: 2024/08/18 23:06:39 by mavander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	error_message(void)
{
	write(1, "\n⚠️ ERROR ⚠️\n", 21);
	write(1, "You need to input values\n\n", 26);
	write(1, "Ex: ./a.out \"1 2 3 4 ... n*4\"", 29);
	write(1, "'n' being the size of your square board\n", 40);
	write(1, "The string being :\n\n", 20);
	write(1, "\t\tcol1up\t\tcol2up\t\tcol3up\t\tcol4up\n", 33);
	write(1, "row1left\t\t\t\t\t\t\t\t\trow1right\n", 27);
	write(1, "row2left\t\t\t\t\t\t\t\t\trow2right\n", 27);
	write(1, "row3left\t\t\t\t\t\t\t\t\trow3right\n", 27);
	write(1, "row4left\t\t\t\t\t\t\t\t\trow4right\n", 27);
	write(1, "\t\tcol1down\tcol2down\tcol3down\tcol4down\n\n", 39);
}
