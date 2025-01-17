# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enalvare <enalvare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 17:03:21 by enalvare          #+#    #+#              #
#    Updated: 2025/01/17 19:08:42 by enalvare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ARCHIVO FUENTE
SRC = ft_printf_caracter.c ft_printf_string.c
#GENERAR EL ARCHIVO OBJETO DE CADA ARCHIVO FUENTE
OBJS = $(SRC:.c=.o)

# ARCHIVO FUENTE BONUS
BONUS = 

#GENERAR EL ARCHIVO OBJETO DE CADA ARCHIVO FUENTE
BONUS_OBJS = $(BONUS:.c=.o)

# COMPILADOR
CC = gcc

RM = rm -rf

AR = ar -rcs

# FLAGS DE COMPILACION
CFLAGS = -Wall -Wextra -Werror

# REGLA PARA COMPILAR LOS ARCHIVOS FUENTE
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}
	
# NOMBRE DEL PROGRAMA
NAME = libftprint.a

BONUS_NAME = .bonus

all: $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(NAME) $(OBJS)

bonus: $(BONUS_NAME)

# LIMPIAR ARCHIVOS GENERADOS EXCEPTO EL EJECUTABLE
clean:
		$(RM) $(OBJS) $(BONUS_OBJS)
		
# LIMPIAR ARCHIVOS GENERADOS INCLUIDO EL EJECUTABLE
fclean: clean
		$(RM) $(NAME)
		
re: clean fclean all

$(BONUS_NAME) : $(OBJS) $(BONUS_OBJS)
		$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
		$(AR) $(BONUS_NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus