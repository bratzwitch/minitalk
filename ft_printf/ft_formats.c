/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:19:41 by vmoroz            #+#    #+#             */
/*   Updated: 2023/09/12 13:37:59 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list ap, const char format)
{
	int	result;

	result = 0;
	if (format == 'c')
		result += ft_printchar(va_arg(ap, int));
	else if (format == 's')
		result += ft_printstr(va_arg(ap, char *));
	else if (format == 'p')
		result += ft_hexpointer(va_arg(ap, unsigned long long));
	else if (format == 'd' || format == 'i')
		result += ft_printnbr(va_arg(ap, int));
	else if (format == 'u')
		result += ft_udecimal(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		result += ft_print_hex(va_arg(ap, unsigned int), format);
	else if (format == '%')
		result += print_percent();
	return (result);
}
