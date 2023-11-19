/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:10:08 by sruff             #+#    #+#             */
/*   Updated: 2023/11/19 19:33:02 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	print_void(unsigned long n, char *base, int counter)
{
	if (n > 15)
	{
		counter += print_void(n / 16, base, counter);
	}
	counter += print_char(base[n % 16]);
	return (counter);
}

//int	main(void)
//{
//	void	*ptr;
//	print_voidptr(ptr, "0123456789abcdef");
//	printf("adress: %p", ptr);
//	return 0;
//}