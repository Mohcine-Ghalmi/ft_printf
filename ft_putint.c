/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:30:11 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/14 18:14:41 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int nbr)
{
	int count;
	unsigned int x;

	count = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		x = (unsigned int)(nbr * -1);
	}
	else
		x = (unsigned int)nbr;
	if (nbr >= 10)
		ft_putint(nbr / 10);
	count += ft_putchar((char)(nbr % 10 + 48));
	return (count);
}
