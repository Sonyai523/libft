# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarthric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 15:42:49 by rarthric          #+#    #+#              #
#    Updated: 2021/10/28 18:36:25 by rarthric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_isascii.c ft_putchar_fd.c ft_strjoin.c ft_substr.c ft_isdigit.c ft_putendl_fd.c ft_strlcat.c ft_tolower.c ft_isprint.c ft_putnbr_fd.c ft_strlcpy.c ft_toupper.c ft_itoa.c ft_putstr_fd.c ft_strlen.c ft_atoi.c ft_memchr.c ft_split.c ft_strmapi.c ft_bzero.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_calloc.c ft_memcpy.c ft_strnstr.c ft_isalnum.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_isalpha.c ft_memset.c ft_striteri.c ft_strtrim.c

NAME = libft.a

OBJS = ${SRCS:.c=.o}

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I./$(HEADER) -c $< -o $@

all:      ${NAME}

${NAME}: 	${OBJS}
			ar rc ${NAME} ${OBJS} $?
			ranlib ${NAME}

clean:
	${RM} ${OBJS}

fclean:       clean
	${RM} ${NAME}

re:          fclean all


.PHONY:       all clean fclean re
