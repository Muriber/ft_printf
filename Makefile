# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 09:16:08 by bjimenez          #+#    #+#              #
#    Updated: 2022/05/20 13:02:38 by bjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/ft_printf.c src/ft_p_char.c src/ft_p_id.c src/ft_p_str.c \
			src/ft_printf_utils.c

OBJS		= ${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

CC			= gcc

NAME		= libftprintf.a

RM			= rm -f

%.o: %.c
			$(CC) $(CFLAGS) -I include/ -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			make -C libft/ all
			cp libft/libft.a $(NAME)  
			ar rcs ${NAME} ${OBJS}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			make -C libft/ fclean

re:			fclean all

.PHONY:		all clean fclean re