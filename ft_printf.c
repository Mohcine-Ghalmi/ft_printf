/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:19:21 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/13 15:28:51 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_output(va_list arg, char *input, int i)
{
		if (input[i] == '%')
			ft_putchar('%');
		else if (input[i] == 'c')
			ft_putchar(va_arg(arg, char));
		else if (input[i] == 's')
			ft_putstr(va_arg(arg, char *));
		else if (input[i] == 'p')
			ft_putptr(va_arg(arg, void *));
		else if (input[i] == 'i')
			ft_putint(va_arg(arg, int));
		else if (input[i] == 'u')
			ft_putuint(va_arg(arg, unsigned int));
		else if (input[i] == 'x')
			ft_puthex(va_arg(arg, void *));
		else if (input[i] == 'X')
			ft_putuphex(va_arg(arg, size_t))
}

int ft_printf(const char *input, ...)
{
	va_list arg;
	int     i;
	int		count;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	va_start(arg, input);
	while (input[i] && i < ft_strlen(input))
	{
		if (input[i] != '%')
			i++;
		else if (i < ft_strlen(input))
		{
			ft_output(arg, input, i++);
		}
		count++;
		if (input[count - 1] == '%')
		{
			if (input[count - 1] == input[count])
				j++;
		}
	}
	va_end(arg);
	return (i - j);
}