/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:05:00 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/13 01:28:03 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *str, ...);
int ft_putchr(char c);
int ft_putstr(char *str);
int ft_putnbr(int nbr);
int ft_putund(unsigned int nbr);
int ft_puthex(unsigned long nbr, char c);
int ft_putptr(void *ptr);
#endif