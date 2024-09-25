# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 16:58:10 by cayuso-f          #+#    #+#              #
#    Updated: 2024/09/25 21:23:53 by cayuso-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = ar rcs
RM = rm -f

CC = clang
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)
HEADERS = libft.h

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(HEADERS) $(OBJ) 
			$(AR) $(NAME) $(OBJ)

bonus	:	$(HEADERS) $(OBJ) $(OBJ_BONUS) 
			$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

%.o:	%.c	$(HEADERS)
			$(CC) $(CCFLAGS) -c $< -o $@ -I $(HEADERS)

clean	:
			$(RM) $(OBJ) $(OBJ_BONUS)

fclean	: 	clean
			$(RM) $(NAME)

re	: 	fclean all

rebonus	:	fclean bonus
