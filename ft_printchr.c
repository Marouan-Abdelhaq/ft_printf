/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:03:48 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/13 23:25:33 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchr(char c)
{
    return (write (1, &c, 1));
}

int ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        ft_putchr(str[i]);
        i++;
    }
    return (i);
}
