/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:40:26 by moel-han          #+#    #+#             */
/*   Updated: 2025/11/01 15:03:08 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_int(int n)
{
    int count = 0;
    char *base;
    base = "0123456789";
    if (n == -2147483648)
        return write(1, "-2147483648", 11);
    if (n < 0)
    {
        count += ft_print_char('-');
        n = -n;
    }
    if (n > 9)
        count += ft_print_int(n / 10);

    count += ft_print_char(base[n % 10]);
    return count;
}

