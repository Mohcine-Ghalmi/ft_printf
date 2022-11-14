/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:36:54 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/14 18:22:41 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuphex(unsigned int n)
{
	char *hex;
	int count;

	hex = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		ft_putuphex(n / 16);
		ft_putuphex(n % 16);
	}
	else if (n < 16)
		count += ft_putchar(hex[n]);
	return (count);
}
