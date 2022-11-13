/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:18:17 by mghalmi           #+#    #+#             */
/*   Updated: 2022/11/13 11:17:05 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void    ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_putint(int nbr);
void	ft_puthex(size_t n);
void    ft_putuint(size_t nbr);
void    ft_putptr(size_t nbr);

# endif