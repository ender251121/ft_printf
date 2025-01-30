/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pontier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <enalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:16:07 by enalvare          #+#    #+#             */
/*   Updated: 2025/01/30 19:44:43 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_pontier(void *c)
{
	unsigned long	a;

	a = (unsigned long)c;
	if (!a)
	{
		write(1, "(nil)", 5);
	}
	else
	{
		ft_printf_string("0x");
		ft_print_hex(a, 'x');
	}
}

/*int	main(void)
{
	void	*ptr;
	char		var;

	ptr = &var;
	ft_printf_pontier(ptr);
	printf("\n");
	printf("%p", ptr);
	return(0);
}*/
