/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <cwannhed@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:29:07 by cwannhed          #+#    #+#             */
/*   Updated: 2025/02/04 16:57:38 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int main()
{
	ft_printf("My printf: %c\n", 'a');
	printf("OG printf: %c\n", 'a');
	ft_printf("My printf: sono %s\n", "caroline");
	printf("OG printf: sono %s\n", "caroline");
	return (0);
}