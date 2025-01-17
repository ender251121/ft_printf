/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_caracter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <enalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:46:36 by enalvare          #+#    #+#             */
/*   Updated: 2025/01/17 18:33:54 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printf_caracter(char c)
{
	write(1, &c, 1);
	return (1);
}

/*int main()
{
    char a;
    a = 'A';
    
    ft_printf_caracter(a);
    return(0);
}*/