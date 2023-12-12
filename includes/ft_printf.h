/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinago <marinago@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:48:27 by marinago          #+#    #+#             */
/*   Updated: 2023/12/10 12:05:32 by marinago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <stdarg.h>

/*FT_PRINTF FUNCTION*/
int		ft_printf(char const *fmt, ...);

/*AUX FUNCTION*/
size_t	ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_hex(unsigned long nbr, char *base);
int		ft_ptr(void *ptr);
int		ft_unsigned(unsigned int nb);

#endif
