/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:11:03 by moel-han          #+#    #+#             */
/*   Updated: 2025/10/31 18:34:37 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_unsigned(unsigned int n)
{
    int count = 0;
    char *base;
    base = "0123456789";
    if (n > 9)
    {
        count += ft_print_unsigned(n / 10);
    }
    count += ft_print_char(base[n % 10]);
    return count;
}

