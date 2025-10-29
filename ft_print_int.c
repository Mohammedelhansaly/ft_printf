/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:40:26 by moel-han          #+#    #+#             */
/*   Updated: 2025/10/29 19:03:06 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t count_digit( int n)
{
    int len;

    len = (n <= 0);
    while (n)
    {
        n /= 10;
        len++;
    }
    return len;
}
void put_int( int n)
{
    char *base;
    base = "0123456789";
    if (n > 9)
    {
        put_int(n / 10);
    }
    ft_print_char(base[n % 10]);
}

int ft_print_int( int n)
{
    put_int(n);
    return (count_digit(n));
}




