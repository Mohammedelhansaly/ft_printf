/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:27:11 by moel-han          #+#    #+#             */
/*   Updated: 2025/10/31 17:24:35 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *str)
{
    int i;

    if (!str)
        return ft_print_str("(null)");
    i = 0;
    while (str[i])
    {
        ft_print_char(str[i]);
        i++;
    }
    return (i);
}