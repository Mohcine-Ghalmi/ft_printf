/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:19:21 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/15 14:39:08 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_output(va_list arg, const char *input, int i)
{
	int	count;

	count = 0;
	if (input[i] == '%')
		count += ft_putchar(input[i]);
	else if (input[i] == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (input[i] == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (input[i] == 'p')
		count += ft_putptr(va_arg(arg, void *));
	else if (input[i] == 'i' || input[i] == 'd')
		count += ft_putint(va_arg(arg, int));
	else if (input[i] == 'u')
		count += ft_putuint(va_arg(arg, unsigned int));
	else if (input[i] == 'x')
		count += ft_puthex(va_arg(arg, unsigned int));
	else if (input[i] == 'X')
		count += ft_putuphex(va_arg(arg, unsigned int));
	else
		count += ft_putchar(input[i]);
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	arg;
	int		i;
	int		len;

	va_start(arg, input);
	i = 0;
	len = 0;
	while (input[i])
	{
		if (input[i] != '%')
			len += ft_putchar(input[i++]);
		if (input[i] == '%')
		{
			++i;
			if (!input[i])
				return (len);
			len += ft_output(arg, input, i++);
		}
	}
	va_end(arg);
	return (len);
}
