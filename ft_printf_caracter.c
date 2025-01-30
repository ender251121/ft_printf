/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_caracter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <enalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:46:36 by enalvare          #+#    #+#             */
/*   Updated: 2025/01/30 19:42:49 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_caracter(char c)
{
	write(1, &c, 1);
	return (1);
}

/*int	main(void)
{
	char	a;

	a = 'A';
	ft_printf_caracter(a);
	ft_printf_caracter('\n');
	printf("%c", a);
	return (0);
}*/
