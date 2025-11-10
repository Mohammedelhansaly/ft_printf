/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:24:40 by moel-han          #+#    #+#             */
/*   Updated: 2025/10/29 18:58:23 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>

int ft_print_adress(void *ptr);
int ft_print_char(char c);
int ft_print_int( int n);
int ft_print_str(char *str);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned int nb, bool upper);
int ft_printf(const char *str, ...);



#endif