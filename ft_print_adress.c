/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:20:11 by moel-han          #+#    #+#             */
/*   Updated: 2025/11/02 13:27:55 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long s, char *hex)
{
	int	count;

	count = 0;
	if (s >= 16)
	{
		count += print_hex(s / 16, hex);
	}
	count += ft_print_char(hex[s % 16]);
	return (count);
}

int	ft_print_adress(void *ptr)
{
	unsigned long	s;
	char			*hex;
	int				count;

	count = 0;
	s = (unsigned long)ptr;
	hex = "0123456789abcdef";
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	if (s == 0)
		ft_print_char('0');
	else
		count = print_hex(s, hex);
	return (count + 2);
}
