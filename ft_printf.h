/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:18:17 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/15 15:34:20 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_putint(int nbr);
int		ft_puthex(unsigned long long n);
int		ft_putuint(size_t nbr);
int		ft_putptr(void *nbr);
int		ft_putuphex(unsigned int n);
int		ft_printf(const char *input, ...);
int		ft_output(va_list arg, const char *input, int i);

#endif
