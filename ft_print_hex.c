/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:27:45 by moel-han          #+#    #+#             */
/*   Updated: 2025/10/29 19:15:21 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t count_digit(int n)
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

int ft_print_hex(unsigned int nb, bool upper)
{
    char *base_low;
    char *base_upper;
    int count;

    count = count_digit(nb);
    base_low = "0123456789abcdef";
    base_upper = "0123456789ABCDEF";

    if (nb >= 16)
    {
        ft_print_hex(nb / 16, upper);
    }
    if (upper)
        ft_print_char(base_upper[nb % 16]);
    else
        ft_print_char(base_low[nb % 16]);
    return count;
}