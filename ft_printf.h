/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:18:17 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/13 16:19:19 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

void    ft_putchar(int c);
void	ft_putstr(const char *str);
void	ft_putint(int nbr);
void	ft_puthex(unsigned int n);
void    ft_putuint(size_t nbr);
void    ft_putptr(void *nbr);
size_t	ft_strlen(const char *s);
void	ft_putuphex(unsigned int n);
int     ft_printf(const char *input, ...);
void	ft_output(va_list arg, const char *input, int i);

# endif