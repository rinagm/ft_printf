/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:21:50 by marinago          #+#    #+#             */
/*   Updated: 2023/12/10 12:46:53 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			len += ft_putchar('-');
			if (len == -1)
				return (-1);
			n = -n;
		}
		if (n > 9)
		{
			len += ft_putnbr(n / 10);
			if (len == -1)
				return (-1);
		}
	}
	len += ft_putchar((n % 10) + '0');
	if (len == -1)
		return (-1);
	return (len);
}
