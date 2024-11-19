/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:39:25 by mananton          #+#    #+#             */
/*   Updated: 2024/11/19 12:54:22 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long n, char *base)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_putnbr_hex(n / 16, base);
	}
	i += ft_putchar(base[n % 16]);
	return (i);
}
