/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <cwannhed@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:50:14 by cwannhed          #+#    #+#             */
/*   Updated: 2025/02/13 17:04:41 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putptr_hex_fd(uintptr_t n, int fd, char letter_case)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count += (ft_putchar_fd('0', fd));
		return (count);
	}
	if (n >= 16)
		count += ft_putptr_hex_fd(n / 16, fd, letter_case);
	if (n % 16 < 10)
		count += ft_putchar_fd('0' + (n % 16), fd);
	else
		count += ft_putchar_fd(letter_case + (n % 16 - 10), fd);
	return (count);
}

int	ft_putptr_fd(void *ptr, int fd)
{
	uintptr_t	n_ptr;
	int			count;

	count = 0;
	if (ptr == NULL)
		return (ft_putstr_fd("(nil)", fd));
	n_ptr = (uintptr_t)ptr;
	count += ft_putstr_fd("0x", fd);
	count += ft_putptr_hex_fd(n_ptr, fd, 'a');
	return (count);
}
