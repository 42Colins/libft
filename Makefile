# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cprojean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 14:30:05 by cprojean          #+#    #+#              #
#    Updated: 2022/11/13 14:39:02 by cprojean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

HEADERS = libft.h

ARFLAGS = rcs

rm = rm -rf

SRCS =		ft_atoi.c     \
			ft_bzero.c    \
			ft_calloc.c   \
			ft_isalnum.c  \
			ft_isalpha.c  \
			ft_isascii.c  \
			ft_isdigit.c  \
			ft_isprint.c  \
			ft_memcpy.c   \
			ft_memmove.c  \
			ft_memset.c   \
			ft_strchr.c   \
			ft_strlcat.c  \
			ft_strlcpy.c  \
			ft_strlen.c   \
			ft_strncmp.c  \
			ft_strnstr.c  \
			ft_strrchr.c  \
			ft_tolower.c  \
			ft_toupper.c  \
			ft_memcmp.c   \
			ft_memchr.c   \
			ft_strdup.c   \

OBJS =
			${SRCS;.c=.o}

$(NAME) =	ar ${ARFLAGS} ${OBJS}

%.o : %.c	${HEADERS}
			$(CC) -c $(CFLAGS) $< -o $@

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:
			clean
			${RM} ${NAME}

re :
			fclean all
