/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:36:54 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/13 16:11:36 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n)
{
	char hex[] = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
	else if (n < 16)
		ft_putchar(hex[n]);
}
