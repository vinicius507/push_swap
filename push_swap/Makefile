## ########################################################################## ##
##                                                                            ##
##                                                        :::      ::::::::   ##
##   Makefile                                           :+:      :+:    :+:   ##
##                                                    +:+ +:+         +:+     ##
##   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        ##
##                                                +#+#+#+#+#+   +#+           ##
##   Created: 2021/10/11 22:34:13 by vgoncalv          #+#    #+#             ##
##   Updated: 2021/12/29 03:21:42 by vgoncalv         ###   ########.fr       ##
##                                                                            ##
## ########################################################################## ##

NAME = push_swap

CC = clang
CFLAGS = -Wall -Werror -Wextra -g3

SRC_DIR = ./src
OBJ_DIR = ./build

LIBFT_PATH ?= ./libft
LIBFT = $(LIBFT_PATH)/lib/libft.a
LIBFT_FLAGS = -L$(LIBFT_PATH)/lib -lft

INCLUDES_DIR = $(LIBFT_PATH)/include $(SRC_DIR)
INCLUDES := $(addprefix -I,$(INCLUDES_DIR))

vpath %.c src src/operations src/instructions src/sorters src/helpers
SRCS := args.c argparser.c clear_stacks.c error.c new_node.c \
		len.c pop.c push.c swap.c rotate.c pa.c pb.c \
		sa.c sb.c ss.c ra.c rb.c rr.c rra.c rrb.c rrr.c \
		is_solved.c get_sorted.c index_puzzle.c prepare.c \
		distance.c smart_rotate.c sort.c small.c markup.c \
		loop.c lock.c big.c
OBJS := $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))

RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $^ $(SRC_DIR)/$(NAME).c $(LIBFT_FLAGS) -o $@

$(LIBFT):
	make -C $(LIBFT_PATH)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)/sorters

$(OBJ_DIR)/%.o: %.c $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) $< -c -o $@

clean:
	$(RM) -r $(OBJ_DIR)
	make clean -C $(LIBFT_PATH)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re
