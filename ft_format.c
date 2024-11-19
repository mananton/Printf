/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:58:59 by mananton          #+#    #+#             */
/*   Updated: 2024/11/19 12:52:05 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_char(args));
	else if (specifier == 's')
		return (ft_string(args));
	else if (specifier == 'p')
		return (ft_pointer(args));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_int(args));
	else if (specifier == 'u')
		return (ft_unsigned(args));
	else if (specifier == 'x')
		return (ft_lowhex(args));
	else if (specifier == 'X')
		return (ft_uphex(args));
	else if (specifier == '%')
		return (ft_percent());
	return (1);
}
