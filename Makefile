# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cprojean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 14:30:05 by cprojean          #+#    #+#              #
#    Updated: 2022/11/11 11:14:40 by cprojean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

rm = rm -rf

SRCS =		ft_atoi.c     \
			ft_bzero.c    \
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

OBJS = ${SRCS;.c=.o}

all:

re:

clean:
			${RM} ${OBJS}

fclean:
			clean
			${RM} ${NAME}
