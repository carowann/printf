/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <cwannhed@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 18:19:45 by cwannhed          #+#    #+#             */
/*   Updated: 2025/02/04 15:32:24 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LIBFT_H
#include "Libft/libft.h"
#endif

int	ft_printf(const char *format, ...);
int check_param(va_list arg, char c);
void ft_putnbr_hex_fd(unsigned int n, int fd);

#endif