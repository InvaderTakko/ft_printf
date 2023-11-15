/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruff <sruff@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:08:02 by sruff             #+#    #+#             */
/*   Updated: 2023/11/15 20:17:39 by sruff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	print_decimal(int n);
int	print_char(int c);
int	print_str(const char *str);
int	print_hex(int number, char *hexset);
int	print_pointer(void *ptr);
int	ft_printf(const char *str, ...);

//typedef struct s_pfdata
//{
//	char			*str;
//	va_list			ap;
//	size_t			size;
//	int				error;
//	unsigned char	flags;
//}					t_pfdata;

#endif