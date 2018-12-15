#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hstolten <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/11 16:46:20 by hstolten          #+#    #+#              #
#    Updated: 2018/12/15 17:51:55 by hstolten         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_memset.c \
				ft_bzero.c\
				ft_memcpy.c\
				ft_memccpy.c\
				ft_memmove.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strlen.c\
				ft_strdup.c\
				ft_strcpy.c\
				ft_strncpy.c\
				ft_strcat.c\
				ft_strncat.c\
				ft_strlcat.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strstr.c\
				ft_strnstr.c\
				ft_strcmp.c\
				ft_strncmp.c\
				ft_atoi.c\
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_memalloc.c\
				ft_memdel.c\
				ft_strnew.c\
				ft_strdel.c\
				ft_strclr.c\
				ft_striter.c\
				ft_striteri.c\
				ft_strmap.c\
				ft_strmapi.c\
				ft_strequ.c\
				ft_strnequ.c\
				ft_strsub.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_strsplit.c\
				ft_itoa.c\
				ft_putchar.c\
				ft_putstr.c\
				ft_putendl.c\
				ft_putnbr.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_isupper.c\
				ft_islower.c\
				ft_lstnew.c\
				ft_lstdel.c\
				ft_lstdelone.c\
				ft_lstadd.c\
				ft_lstiter.c\
				ft_lstmap.c\
				ft_sqrt.c\
				ft_factorial.c\
				ft_putnbr_base.c\
				ft_print_params.c\
				ft_range.c\
				ft_btree_create_node.c\
				ft_btree_apply_infix.c\
				ft_btree_apply_suffix.c\
				ft_btree_insert_data.c\
				ft_btree_search_item.c
OBJ			= $(FILES:%.c=%.o)

FILES2		= ft_memset.c \
				ft_bzero.c\
				ft_memcpy.c\
				ft_memccpy.c\
				ft_memmove.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strlen.c\
				ft_strdup.c\
				ft_strcpy.c\
				ft_strncpy.c\
				ft_strcat.c\
				ft_strncat.c\
				ft_strlcat.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strstr.c\
				ft_strnstr.c\
				ft_strcmp.c\
				ft_strncmp.c\
				ft_atoi.c\
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_memalloc.c\
				ft_memdel.c\
				ft_strnew.c\
				ft_strdel.c\
				ft_strclr.c\
				ft_striter.c\
				ft_striteri.c\
				ft_strmap.c\
				ft_strmapi.c\
				ft_strequ.c\
				ft_strnequ.c\
				ft_strsub.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_strsplit.c\
				ft_itoa.c\
				ft_putchar.c\
				ft_putstr.c\
				ft_putendl.c\
				ft_putnbr.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_isupper.c\
				ft_islower.c\
				ft_lstnew.c\
				ft_lstdelone.c\
				ft_lstdel.c\
				ft_lstadd.c\
				ft_lstiter.c\
				ft_lstmap.c\
                ft_sqrt.c\
                ft_factorial.c\
				ft_putnbr_base.c\
				ft_print_params.c\
				ft_range.c\
				ft_btree_create_node.c\
				ft_btree_apply_infix.c\
				ft_btree_apply_suffix.c\
				ft_btree_insert_data.c\
				ft_btree_search_item.c

all: $(NAME)

so:
	gcc -shared -o libft.so -fPIC $(FILES2)

$(NAME):
	gcc $(CFLAGS) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re