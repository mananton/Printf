/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:51:02 by mananton          #+#    #+#             */
/*   Updated: 2024/11/19 13:02:11 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	return (ft_putstr(s));
}
