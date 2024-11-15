/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:20:58 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/15 14:36:09 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count += ft_putstr("–2147483648");
	}
	else 
	{
<<<<<<< HEAD
		if (nbr < 0)
		{
			count += ft_putchr('-');
			nbr = -nbr;
		}
		if (nbr > 9)
		{
			count += ft_putnbr(nbr / 10);
		}
		count += ft_putchr((nbr % 10) + 48);
	}
=======
		ft_putchr('-');
		count++;
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		count += ft_putnbr(nbr / 10);
	}
	ft_putchr((nbr % 10) + 48);
	count++;
>>>>>>> 3ac716f (mod)
	return (count);
}

int	ft_putund(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr > 9)
	{
		count += ft_putnbr(nbr / 10);
	}
	ft_putchr((nbr % 10) + 48);
	count++;
	return (count);
}
