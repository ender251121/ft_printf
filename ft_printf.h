/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <enalvare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:40:37 by enalvare          #+#    #+#             */
/*   Updated: 2025/01/30 19:42:36 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf_caracter(char c);
int		ft_printf_string(char *c);
void	ft_print_hex(unsigned long num, int uppercase);
void	ft_printf_ent(int c);
void	ft_printf_pontier(void *c);

#endif