/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:38:18 by marinago          #+#    #+#             */
/*   Updated: 2023/12/10 12:43:11 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		nb = 4294967295 + nb + 1;
	if (nb > 9)
	{
		len += ft_unsigned(nb / 10);
		if (len == -1)
			return (-1);
	}
	len += ft_putchar((nb % 10) + '0');
	if (len == -1)
		return (-1);
	return (len);
}
