/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:50:19 by vmoroz            #+#    #+#             */
/*   Updated: 2023/09/12 13:37:07 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <inttypes.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printchar(int ch);
void	ft_putchar_fd(char ch, int fd);
int		ft_printf(const char *str, ...);
int		ft_formats(va_list ap, const char format);
int		ft_printstr(char *str);
int		ft_hexpointer(unsigned long long ptr);
char	*ft_itoa(int n);
int		ft_printnbr(int n);
int		ft_udecimal(unsigned int num);
int		print_percent(void);
int		ft_print_hex(unsigned int num, const char format);

#endif