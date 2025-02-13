/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <cwannhed@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:29:07 by cwannhed          #+#    #+#             */
/*   Updated: 2025/02/13 17:15:43 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main()
{
    int	ret_ft;
	int	ret_orig;

    ret_ft = ft_printf("My printf : %c\n", 'a');
    ret_orig = printf("OG printf : %c\n", 'a');
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("My printf : sono %s\n", "caroline");
    ret_orig = printf("OG printf : sono %s\n", "caroline");
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("My printf : sono %s\n", (char *)NULL);
    ret_orig = printf("OG printf : sono %s\n", (char *)NULL);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("My printf : numero %d\n", 42);
    ret_orig = printf("OG printf : numero %d\n", 42);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("My printf : numero %d\n", INT_MAX);
    ret_orig = printf("OG printf : numero %d\n", INT_MAX);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("My printf : numero %d\n", INT_MIN);
    ret_orig = printf("OG printf : numero %d\n", INT_MIN);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("My printf : numero %i\n", 42);
    ret_orig = printf("OG printf : numero %i\n", 42);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("My printf : numero %u\n", UINT_MAX);
    ret_orig = printf("OG printf : numero %u\n", UINT_MAX);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("My printf : numero %u\n", 0);
    ret_orig = printf("OG printf : numero %u\n", 0);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("My printf : hex %x\n", 255);
    ret_orig = printf("OG printf : hex %x\n", 255);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("My printf : hex %X\n", 255);
    ret_orig = printf("OG printf : hex %X\n", 255);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

    void *ptr = (void *)0x12345678;
    ret_ft = ft_printf("My printf : pointer %p\n", ptr);
    ret_orig = printf("OG printf : pointer %p\n", ptr);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	int x = 42;
	ret_ft = ft_printf("My printf : pointer %p\n", &x);
    ret_orig = printf("OG printf : pointer %p\n", &x);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("My printf : pointer %p\n", NULL);
    ret_orig = printf("OG printf : pointer %p\n", NULL);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("My printf : %%\n");
    ret_orig = printf("OG printf : %%\n");
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf(NULL);
    ret_orig = printf(NULL);
    printf("Return values -> ft_printf: %d, printf: %d\n\n", ret_ft, ret_orig);

    return (0);
}
