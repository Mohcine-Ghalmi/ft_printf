/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:18:17 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/14 18:27:03 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int    ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_putint(int nbr);
int		ft_puthex(unsigned int n);
int		ft_putuint(size_t nbr);
int     ft_putptr(void *nbr);
size_t	ft_strlen(const char *s);
int 	ft_putuphex(unsigned int n);
int     ft_printf(const char *input, ...);
int 	ft_output(va_list arg, const char *input, int i);

# endif