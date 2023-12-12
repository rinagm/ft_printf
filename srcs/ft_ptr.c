/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:32:39 by marinago          #+#    #+#             */
/*   Updated: 2023/12/10 12:30:02 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(void *ptr)
{
	int	len;
	int	aux;

	len = 0;
	aux = 0;
	if (ft_putstr("0x") == -1)
		return (-1);
	len += 2;
	aux = ft_hex((unsigned long)ptr, "0123456789abcdef");
	if (aux == -1)
		return (-1);
	len += aux;
	return (len);
}
