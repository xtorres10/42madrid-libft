# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xtorres- <xtorres-@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 01:51:44 by xtorres-          #+#    #+#              #
#    Updated: 2022/04/22 01:51:47 by xtorres-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -rf

NAME = libft
LIBNAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_strlen.c ft_isdigit.c ft_isalpha.c ft_isprint.c\
	ft_isascii.c ft_isalnum.c ft_toupper.c ft_tolower.c ft_strlcpy.c\
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c\
	ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_calloc.c ft_strdup.c\
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c

BSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

OBJS = $(SRC:.c=.o)

B_OBJS = $(BSRC:.c=.o)

S_NAME = .simple

B_NAME = .bonus

all: $(NAME)

$(NAME): $(S_NAME)

$(S_NAME): $(OBJS)
	@$(AR) $(LIBNAME) $(OBJS)
	@$(RM) $(B_NAME)
	@touch $(S_NAME)

$(B_NAME): $(B_OBJS)
	@$(AR) $(LIBNAME) $(B_OBJS)
	@$(RM) $(S_NAME)
	@touch $(B_NAME)

bonus: $(B_NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS) $(B_OBJS) 

fclean: clean
	$(RM) $(LIBNAME) $(S_NAME) $(B_NAME)

re: fclean all 

.PHONY: all clean fclean re
