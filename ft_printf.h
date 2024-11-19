/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:31:20 by mananton          #+#    #+#             */
/*   Updated: 2024/11/19 13:31:21 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_printf(const char *format, ...);
int		ft_char(va_list args);
int		ft_string(va_list args);
int		ft_pointer(va_list args);
int		ft_int(va_list args);
int		ft_unsigned(va_list args);
int		ft_lowhex(va_list args);
int		ft_uphex(va_list args);
int		ft_percent(void);
int		ft_putnbr(long n);
int		ft_putnbr_hex(unsigned long n, char *base);
int		ft_format(char specifier, va_list args);
int		ft_putstr(char *str);

#endif