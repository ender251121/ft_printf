/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <enalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:43:53 by enalvare          #+#    #+#             */
/*   Updated: 2025/01/30 19:43:02 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_ent(int c)
{
	char	x;

	if (c == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (c < 0)
	{
		write(1, "-", 1);
		c = -c;
	}
	if (c > 9)
	{
		ft_printf_ent(c / 10);
	}
	x = c % 10 + '0';
	write(1, &x, 1);
}

/*int	main(void)
{
	unsigned int	a;

	a = -4545;
	ft_printf_ent(a);
	printf("\n");
	printf("%u", -4545);
}*/
