/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <cwannhed@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:29:07 by cwannhed          #+#    #+#             */
/*   Updated: 2025/02/04 21:15:19 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int main()
{
	ft_printf("My printf: %c\n", 'a');
	printf("OG printf: %c\n", 'a');
	ft_printf("My printf: %s\n", "stringa");
	printf("OG printf: %s\n", "stringa");
	ft_printf("My printf: %d\n", 10);
	printf("OG printf: %d\n", 10);
	ft_printf("My printf: %x\n", 255);
	printf("OG printf: %x\n", 255);
	return (0);
}