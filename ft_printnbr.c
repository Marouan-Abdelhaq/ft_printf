/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:20:58 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/13 01:26:20 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int nbr)
{
    int count;

    count = 0;
    if (nbr == -2147483648)
    {
        ft_putstr("–2147483648");
        count += 11;
    }
    else if (nbr < 0)
    {
        ft_putchr('-');
        count++;
        ft_putnbr(-nbr);
    }
    else if (nbr > 9)
    {
        count += ft_putnbr(nbr / 10);
    }
    ft_putchr((nbr % 10) + 48);
    count++;
    return (count);
}

void ft_putund(unsigned int nbr)
{
    int count;

    count = 0;
    if (nbr > 9)
    {
        count += ft_putnbr(nbr / 10);
    }
    ft_putchr((nbr % 10) + 48);
    count++;
    return (count);
}