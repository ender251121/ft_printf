/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <enalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:19:05 by enalvare          #+#    #+#             */
/*   Updated: 2025/01/30 19:43:22 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_string(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write (1, &c[i], 1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*a;

	a = "hola";
	ft_printf_string(a);
	ft_printf_string("\n");
	printf("%s", a);
	return (0);
}*/
