/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:30:11 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/13 14:15:36 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putint(int nbr)
{
	unsigned int x;

	if (nbr < 0)
	{
		ft_putchar('-');
		x = (unsigned int)(nbr * -1);
	}
	else
		x = (unsigned int)nbr;
	if (nbr >= 10)
		ft_putint(nbr / 10);
	ft_putchar((char)(nbr % 10 + 48));
}
