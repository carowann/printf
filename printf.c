/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <cwannhed@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 18:18:14 by cwannhed          #+#    #+#             */
/*   Updated: 2025/02/04 21:12:13 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int check_param(va_list arg, char c)
{
	int	count;
	
	count = 0;
	if (c == '%')
		count += write(1, "%", 1);
	else if (c == 'c')
		ft_putchar_fd(va_arg(arg, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(arg, char *), 1);
	// else if (c == 'p')
	// 	ft_putptr_fd((char *)arg, 1);
	else if (c == 'd')
		ft_putnbr_fd(va_arg(arg, int), 1);
	else if (c == 'x')
		ft_putnbr_hex_fd(va_arg(arg, unsigned int), 1);
	return (count);
}

// void ft_putptr_fd(void	*ptr, int fd)
// {
// 	write(1, "0x", 2);
// }

void ft_putnbr_hex_fd(unsigned int n, int fd)
{
	char	hex_digits[16];
	char	c;
	size_t	i;

	i = 0;
	while (i < 16)
	{
		hex_digits[i] = "0123456789abcdef"[i];
		i++;
	}
	if (n >= 16)
		ft_putnbr_hex_fd(n / 16, fd);
	c = hex_digits[n % 16];
	write(fd, &c, 1);
}

int	ft_printf(const char *format, ...)
{
	int	count;
	size_t i;
	va_list arg;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			count += check_param(arg, format[++i]);
		else
			count += write(1, &(format[i]), 1);
		i++;
	}
	va_end(arg);
	return(count);
}
