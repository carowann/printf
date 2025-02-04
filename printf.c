/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <cwannhed@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 18:18:14 by cwannhed          #+#    #+#             */
/*   Updated: 2025/02/04 17:01:33 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int check_param(va_list arg, char c)
{
	if (c == '%')
		write(1, "%", 1);
	else if (c == 'c')
		ft_putchar_fd(*(va_arg(arg, char *)),1);
	else if (c == 's')
		ft_putstr_fd(va_arg(arg, char *), 1);
	else if (c == 'p')
		ft_putstr_fd((char *)arg, 1);
	
	return (ft_strlen(va_arg(arg, char *)));
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
			check_param(arg, format[++i]);
		else
			write(1, &(format[i]), 1);
		i++;
		count++;
	}
	va_end(arg);
	return(count);
}
