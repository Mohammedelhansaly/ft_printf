/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:27:45 by moel-han          #+#    #+#             */
/*   Updated: 2025/11/02 14:29:01 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_hex(unsigned int nb, bool upper)
{
    char *base_low = "0123456789abcdef";
    char *base_upper = "0123456789ABCDEF";
    int count;
    
    count = 0;

    
    if (nb == 0)
        return (ft_print_char('0'));
    if (nb / 16 != 0)
        count += ft_print_hex(nb / 16, upper);
    if (upper)
        count += ft_print_char(base_upper[nb % 16]);
    else
        count += ft_print_char(base_low[nb % 16]);
    return (count);
}
