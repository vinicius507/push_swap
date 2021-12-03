## ########################################################################## ##
##                                                                            ##
##                                                        :::      ::::::::   ##
##   Makefile                                           :+:      :+:    :+:   ##
##                                                    +:+ +:+         +:+     ##
##   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        ##
##                                                +#+#+#+#+#+   +#+           ##
##   Created: 2021/10/11 22:34:13 by vgoncalv          #+#    #+#             ##
##   Updated: 2021/12/02 21:02:51 by vgoncalv         ###   ########.fr       ##
##                                                                            ##
## ########################################################################## ##

NAME = push_swap

CC = clang
CFLAGS = -Wall -Werror -Wextra -g3

SRC_DIR = ./src
OBJ_DIR = ./build

INCLUDES_DIR=./libft/includes $(SRC_DIR)
INCLUDES := $(addprefix -I,$(INCLUDES_DIR))

vpath %.c src src/operations src/instructions
SRCS := argparser.c clear_stacks.c error.c new_node.c \
		len.c pop.c push.c swap.c rotate.c pa.c pb.c \
		sa.c sb.c ss.c ra.c rb.c rr.c rra.c rrb.c rrr.c \
		is_solved.c
OBJS := $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))

RM = rm -f

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_FLAGS = -L$(LIBFT_DIR) -lft

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $^ $(SRC_DIR)/$(NAME).c $(LIBFT_FLAGS) -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)/sorters

$(OBJ_DIR)/%.o: %.c $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) $< -c -o $@

clean:
	$(RM) -r $(OBJ_DIR)
	make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
