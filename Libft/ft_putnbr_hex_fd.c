/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <cwannhed@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:26:02 by cwannhed          #+#    #+#             */
/*   Updated: 2025/02/13 17:03:29 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hex_fd(unsigned int n, int fd, char letter_case)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count += (ft_putchar_fd('0', fd));
		return (count);
	}
	if (n >= 16)
		count += ft_putnbr_hex_fd(n / 16, fd, letter_case);
	if (n % 16 < 10)
		count += ft_putchar_fd('0' + (n % 16), fd);
	else
		count += ft_putchar_fd(letter_case + (n % 16 - 10), fd);
	return (count);
}
