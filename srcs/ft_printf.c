/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:51:22 by marinago          #+#    #+#             */
/*   Updated: 2023/12/10 12:20:13 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_converts(char fmt, va_list args)
{
	if (fmt == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (fmt == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (fmt == 'p')
		return (ft_ptr(va_arg(args, void *)));
	else if (fmt == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (fmt == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (fmt == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (fmt == 'x')
		return (ft_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (fmt == 'X')
		return (ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (fmt == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start (args, fmt);
	len = 0;
	i = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			len += ft_converts(fmt[i + 1], args);
			i++;
		}
		else
			len += ft_putchar(fmt[i]);
		i++;
	}
	va_end (args);
	return (len);
}
