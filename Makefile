# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cprojean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 14:30:05 by cprojean          #+#    #+#              #
#    Updated: 2022/11/25 14:08:43 by cprojean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

HEADERS = libft.h

ARFLAGS = rcs

rm = rm -rf

SRCS =		ft_atoi.c               \
			ft_itoa.c               \
			ft_bzero.c              \
			ft_calloc.c             \
			ft_isalnum.c            \
			ft_isalpha.c            \
			ft_isascii.c            \
			ft_isdigit.c            \
			ft_isprint.c            \
			ft_memcpy.c             \
			ft_memmove.c            \
			ft_memset.c             \
			ft_strchr.c             \
			ft_strlcat.c            \
			ft_strlcpy.c            \
			ft_strlen.c             \
			ft_strncmp.c            \
			ft_strnstr.c            \
			ft_strrchr.c            \
			ft_tolower.c            \
			ft_toupper.c            \
			ft_memcmp.c             \
			ft_memchr.c             \
			ft_strdup.c             \
			ft_substr.c             \
			ft_strjoin.c            \
			ft_split.c              \
			ft_strtrim.c            \
			ft_strmapi.c            \
			ft_striteri.c           \
			ft_putchar_fd.c         \
			ft_putstr_fd.c          \
			ft_putendl_fd.c         \
			ft_putnbr_fd.c          \

SRCS_bonus =
			ft_lstnew.c             \
			ft_lstadd_front.c       \
			ft_lstlast.c            \
			ft_lstsize.c            \


OBJS =		${SRCS:.c=.o}

OBJS_bonus =	${SRCS_bonus:.c=.o}

all:		${NAME}

${NAME} :	${OBJS}
			ar ${ARFLAGS} ${NAME} ${OBJS}

%.o : %.c	Makefile ${HEADERS}
			$(CC) -c $(CFLAGS) $< -o $@

${NAME_bonus} :	${OBJS} ${OBJS_bonus}
				ar ${ARFLAGS} ${NAME} ${OBJS} ${OBJS_bonus}

bonus :	all ${NAME_bonus}

clean:
			${RM} ${OBJS} ${OBJS_bonus}

fclean:		clean
			${RM} ${NAME}

re :		fclean all

.PHONY :	all make clean fclean re bonus
