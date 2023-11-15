/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:16:50 by sruff             #+#    #+#             */
/*   Updated: 2023/11/15 20:17:19 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

//void	example_function(int fixed_param, ...)
//{
//	va_list args;
//	va_start(args, fixed_param);
//	int value = va_arg(args, int);
//	printf("Fixed param: %d\n", fixed_param);
//	printf("Variable argument: %d\n", value);
//	//va_arg(args, int);
//	printf("Variable argument: %d\n", 1 + va_arg(args, int));
//	va_end(args);
//}
//int main() {
//    example_function(10, 42, 123);
//    return 0;
//}

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(const char *str)
{
	int	counter;

	counter = 0;
	if (str == NULL)
		return (print_str("(null)"));
	while (*str)
	{
		counter += write(1, str, 1);
		str++;
	}
	return (counter);
}

static int	check_type(const char *str, va_list args)
{
	if (*str == 'c')
		return (print_char(va_arg(args, int)));
	else if (*str == 's')
		return (print_str(va_arg(args, char *)));
	else if (*str == 'd')
		return (print_decimal(va_arg(args, int)));
	else if (*str == 'i')
		return (print_decimal(va_arg(args, int)));
	else if (*str == 'X')
		return (print_hex(va_arg(args, int), "0123456789ABCDEF"));
	else if (*str == 'x')
		return (print_hex(va_arg(args, int), "0123456789abcdef"));
	else if (*str == 'u')
		return (print_decimal(va_arg(args, unsigned int)));
	else if (*str == 'p')
		return (print_pointer(va_arg(args, void *)));
	else
		return (print_char('%'));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, str);

	while (*str)
	{
		if (*str == '%')
			counter += check_type(++str, args);
		else
			counter += write (1, str, 1);
		str++;
	}
	return counter;
}

//int main(void)
//{
	//ft_printf("Print this -> %c\nand this: %c\n", '$', '#');
	//ft_printf("Print this -> %s\nand this: %s\n", "", "");
	//ft_printf("Print this -> %c\nand this: %c\n", '$', '#');
	//ft_printf("Print this -> %d\nand this: %d\n", -1234, 1234);
//	return 0;
//}