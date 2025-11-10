/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:35:24 by moel-han          #+#    #+#             */
/*   Updated: 2025/11/07 16:38:09 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	t_format(char str, va_list args)
{
	if (str == '%')
		return (write(1, "%", 1));
	else if (str == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (str == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_print_adress(va_arg(args, void *)));
	else if (str == 'i' || str == 'd')
		return (ft_print_int(va_arg(args, int)));
	else if (str == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (str == 'x' || str == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), str == 'X'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	if (!str)
		return (0);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += t_format(str[i + 1], args);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
