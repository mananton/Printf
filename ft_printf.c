/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:41:30 by mananton          #+#    #+#             */
/*   Updated: 2024/11/19 13:41:26 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process_format(va_list args, const char *format)
{
	int	i;

	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (i);
			i += ft_format(*format, args);
		}
		else
		{
			ft_putchar(*format);
			i++;
		}
		format++;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);
	i = process_format(args, format);
	va_end(args);
	return (i);
}
/*
int	main(void)
{
	int	num;
	char	c;
	char	*s;

	ft_printf("%d\n", ft_printf(NULL));
	printf("%d\n", printf(NULL));

	num = 9;
	ft_printf("%d\n", num);
	printf("%d\n", num);

	c = 'a';
	ft_printf("%c\n", c);
	printf("%c\n", c);

	s = NULL;
	ft_printf("%s\n", s);
	printf("%s\n", s);
	ft_printf("%p\n", s);
	printf("%p\n", s);

	s = "ça";
	ft_printf("%s\n", s);
	printf("%s\n", s);
	ft_printf("%p\n", s);
	printf("%p\n", s);

	num = -22322432;
	ft_printf("%u\n", num);
	printf("%u\n", num);

	ft_printf("%%%");
	ft_printf("\n");
	printf("%%%");
	printf("\n");

	ft_printf("cspdiuxX%");
	ft_printf("\n");
	printf("cspdiuxX%");
	printf("\n");	
}*/
