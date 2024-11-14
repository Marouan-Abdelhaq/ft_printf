/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:02:11 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/14 00:19:51 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_checktype(char c, va_list args)
{
    int count;

    count = 0;
    if (c == 'c')
    {
        ft_putchr(va_arg(args, int));
        count++;
    }
    else if (c == 's')
    {
        ft_putstr(va_arg(args, char *));
        count++;
    }
    else if (c == 'd' || c == 'i')
    {
        ft_putnbr(va_arg(args, int));
        count++;
    }
    else if (c == 'u')
    {
        ft_putunbr(va_arg(args, unsigned int));
        count++;
    }
    else if (c == 'x' || c == 'X')
    {
        ft_puthex(va_arg(args, unsigned int), c);
        count++;
    }
    else if (c == 'p')
    {
        ft_putptr(va_arg(args, void *));
        count++;
    }
    return (count);
}
int ft_printf(const char *str, ...)
{
    int i;
    va_list args;

    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1])
        {
            i++;
            ft_checktype(str[i], args);
        }
        i++;
    }
}

int main()
{
    ft_printf("%d", 124578);
    return 0;
}