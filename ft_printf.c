/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:02:11 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/15 17:54:40 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checktype(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchr(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putund(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_puthex(va_arg(args, unsigned long), c);
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == '%')
		count += ft_putchr('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += ft_checktype(str[i], args);
		}
		else
		{
			return (-1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
