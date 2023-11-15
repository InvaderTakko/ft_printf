/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:14:13 by sruff             #+#    #+#             */
/*   Updated: 2023/11/15 18:40:39 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	print_hex(int number, char *hexset)
{
	int		i;
	int		counter;
	char	output[9];

	i = 0;
	counter = 0;
	if (number == 0)
		return (counter += write(1, "0", 1));
	while (i < 8)
	{
		output[i] = hexset[(number >> (28 - 4 * i)) & 0xF];
		i++;
	}
	//output[i] = '\0';
	i = 0;
	while (output[i] == '0')
		i++;
	while (output[i])
	{
		counter += write(1, &output[i], 1);
		i++;
	}
	return (counter);
}

//int	main(void)
//{
//	print_hex(10, "0123456789ABCDEF");
//	printf("show me the hex: %X\n", 10);
//	return 0;
//}