# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 17:57:39 by jlecorne          #+#    #+#              #
#    Updated: 2022/11/12 10:55:34 by jlecorne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_atoi.c
			srcs/ft_bzero.c
			srcs/ft_calloc.c
			srcs/ft_isalnum.c
			srcs/ft_isalpha.c
			srcs/ft_isascii.c
			srcs/ft_isdigit.c
			srcs/ft_isprint.c
			srcs/ft_memchr.c
			srcs/ft_memcmp.c
			srcs/ft_memcpy.c
			srcs/ft_memmove.c
			srcs/ft_memset.c
			srcs/ft_split.c
			srcs/ft_strchr.c
			srcs/ft_strdup.c
			srcs/ft_strjoin.c
			srcs/ft_strlcat.c
			srcs/ft_strlcpy.c
			srcs/ft_strlen.c
			srcs/ft_strncmp.c
			srcs/ft_strnstr.c
			srcs/ft_strrchr.c
			srcs/ft_strtrim.c
			srcs/ft_substr.c
			srcs/ft_tolower.c
			srcs/ft_toupper.c

NAME	= libft.a

OBJS	=  ${SRCS:.c=.o}

HEADERS	= includes/

.c.o	:
		gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}

all : ${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all