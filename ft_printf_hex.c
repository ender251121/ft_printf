/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <enalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:31:27 by enalvare          #+#    #+#             */
/*   Updated: 2025/01/30 19:43:10 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_recursive(unsigned long num, int uppercase)
{
	char	*hex_digits;
	char	*hex_digits_upper;

	hex_digits = "0123456789abcdef";
	hex_digits_upper = "0123456789ABCDEF";
	if (num >= 16)
	{
		ft_print_hex_recursive(num / 16, uppercase);
	}
	if (uppercase == 'X')
	{
		ft_printf_caracter(hex_digits_upper[num % 16]);
	}
	if (uppercase == 'x')
	{
		ft_printf_caracter(hex_digits[num % 16]);
	}
}

void	ft_print_hex(unsigned long num, int uppercase)
{
	if (num == 0)
	{
		ft_printf_caracter('0');
	}
	else
	{
		ft_print_hex_recursive(num, uppercase);
	}
}

/*int	main(void)
{
	unsigned long	num;

	num = 5792494564567576;
	write(1, "Número hexadecimal en minúsculas: ", 34);
	ft_print_hex(num, 'x');
	{
		write(1, "\n", 1);
	}
	write(1, "Número hexadecimal en mayúsculas: ", 34);
	ft_print_hex(num, 'X');
	{
		write(1, "\n", 1);
	}
	printf("numero hexadecimal em minuscula %lx \n", num);
	printf("numero hexadecimal en mayuscula %lX \n", num);
	return (0);
}
*/