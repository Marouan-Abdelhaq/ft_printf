/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlng.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:52:30 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/14 11:05:10 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(unsigned long nbr, char c)
{
    char *str;
    int count;

    count = 0;
    if (c == 'x')
        str = "0123456789abcdef";
    else
        str = "0123456789ABCDEF";
    if (nbr > 15)
    {
        count += ft_puthex(nbr / 16, c);
    }
    ft_putchr(str[nbr % 16]);
    count++;
    return (count);
}

int ft_putptr(void *ptr)
{
   int count;

    if (!ptr)
        return  ft_putstr("(nil)");
    count = 0;
    ft_putstr("0x");
    count += 2;
    count += ft_puthex((unsigned long)ptr, 'x');
    return (count); 
}