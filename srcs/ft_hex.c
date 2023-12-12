/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:25:17 by marinago          #+#    #+#             */
/*   Updated: 2023/12/10 12:05:21 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long nbr, char *base)
{
	int		nbr_base[16];
	int		result;
	int		i;

	i = 0;
	result = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	while (nbr)
	{
		nbr_base[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		result += ft_putchar(base[nbr_base[i]]);
		i--;
	}
	return (result);
}
