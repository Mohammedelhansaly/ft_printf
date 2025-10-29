/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:11:03 by moel-han          #+#    #+#             */
/*   Updated: 2025/10/29 19:02:58 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t count_digit(unsigned int n)
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
void put_unsigned(unsigned int n)
{
    char *base;
    base = "0123456789";
    if (n > 9)
    {
        put_unsigned(n / 10);
    }
    ft_print_char(base[n % 10]);
}
int ft_print_unsigned(unsigned int n)
{
    put_unsigned(n);
    return (count_digit(n));
}

