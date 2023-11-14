# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkannane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 13:59:00 by tkannane          #+#    #+#              #
#    Updated: 2023/11/09 09:52:53 by tkannane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmd = cc
flags = -Wall -Werror -Wextra
sources = ft_bzero.c ft_isalpha.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_substr.c ft_strtrim.c ft_itoa.c ft_striteri.c ft_putstr_fd.c ft_putnbr_fd.c ft_lstnew.c\
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strmapi.c ft_putchar_fd.c ft_putendl_fd.c ft_split.c
objs = $(sources:.c=.o)
bns = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
bonus_obj = $(bns:.c=.o)
NAME = libft.a

%.o:%.c libft.h
	$(cmd) $(flags) -c $< -o $@ 

all: $(NAME)

$(NAME): $(objs)
	ar -rc $(NAME) $(objs)

bonus: $(bonus_obj)
	ar -rc $(NAME) $(bonus_obj)

clean:
	rm -rf $(objs) $(bonus_obj)

fclean: clean
	rm -rf $(NAME) $(bonus)

re: fclean all

.PHONY : all bonus clean fclean re