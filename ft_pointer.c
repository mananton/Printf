/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:32:05 by mananton          #+#    #+#             */
/*   Updated: 2024/11/19 13:03:06 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(va_list args)
{
	void	*p;
	int		i;

	p = va_arg(args, void *);
	if (!p)
		return (ft_putstr("(nil)"));
	i = 0;
	i += ft_putstr("0x");
	i += ft_putnbr_hex((unsigned long)p, "0123456789abcdef");
	return (i);
}
