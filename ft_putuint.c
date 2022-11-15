/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 11:12:02 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/14 18:16:10 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(size_t nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count += ft_putuint(nbr / 10);
	count += ft_putchar(nbr % 10 + 48);
	return (count);
}
