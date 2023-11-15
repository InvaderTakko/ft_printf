/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:10:08 by sruff             #+#    #+#             */
/*   Updated: 2023/11/15 20:20:51 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	//void	*convert;
	uintptr_t	ptrvalue;
	//convert = (void *)
	ptrvalue = (uintptr_t)ptr;
	print_char('0');
	print_char('x');
	return (2 + print_hex(ptrvalue, "0123456789abcdef"));
}
//int main() {
//    char x = 123768;
//    int *ptr = &x;

//    printf("Address of x: %p\n", (void *)ptr);

//    return 0;
//}
