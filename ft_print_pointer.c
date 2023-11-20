/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:10:08 by sruff             #+#    #+#             */
/*   Updated: 2023/11/20 20:52:24 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

//int	print_void(unsigned long n, char *base, int counter)
//{
//	if (n > 15)
//	{
//		counter += print_void(n / 16, base, counter);
//	}
//	counter += print_char(base[n % 16]);
//	return (counter);
//}

int	loop(unsigned long nbr, char *hexset, int count)
{
	int	temp;

	temp = 0;
	if (nbr > 15)
	{
		temp = loop(nbr / 16, hexset, count);
		if (temp < 0)
			return ((-1));
		count += temp;
	}
	if ((print_char(hexset[nbr % 16])) > 0)
		count++;
	else
		return ((-1));
	return (count);
}

int	print_void(unsigned long n, char *base, int counter)
{
	int	temp;

	temp = 0;
	if ((print_str("0x")) < 0)
		return ((-1));
	temp = loop(n, base, counter);
	if (temp < 0)
		return (temp);
	return (temp + 2);
}

//int	main(void)
//{
//	void	*ptr;
//	print_voidptr(ptr, "0123456789abcdef");
//	printf("adress: %p", ptr);
//	return 0;
//}