/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:48:22 by mananton          #+#    #+#             */
/*   Updated: 2024/11/19 12:51:52 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uphex(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	return (ft_putnbr_hex(num, "0123456789ABCDEF"));
}
