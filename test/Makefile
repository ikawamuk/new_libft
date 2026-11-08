# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/07 21:52:32 by ikawamuk          #+#    #+#              #
#    Updated: 2026/11/08 17:58:13 by ikawamuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME        := test_libft

CC          := cc
ASM         := nasm

CFLAGS      := -Wall -Wextra -Werror -g
CPPFLAGS    := -I../libft/include/libft/
LDFLAGS     := -nostdlib -pie

LIBFT_DIR   := ../libft
LIBFT       := $(LIBFT_DIR)/libft.a

SRC_DIR     := src
OBJ_DIR     := obj

SRCS        := $(shell find $(SRC_DIR) -type f -name '*.c')
OBJS        := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))
DEPS        := $(OBJS:.o=.d)

CRT_SRC     := $(LIBFT_DIR)/crt/x86_64/crt1.s
CRT_OBJ     := $(OBJ_DIR)/crt1.o

.PHONY: all clean fclean re run FORCE

all: $(NAME)

FORCE:

$(LIBFT): FORCE
	$(MAKE) -C $(LIBFT_DIR)

$(CRT_OBJ): $(CRT_SRC)
	@mkdir -p $(dir $@)
	$(ASM) -f elf64 $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MP -c $< -o $@

$(NAME): $(OBJS) $(CRT_OBJ) $(LIBFT)
	$(CC) $(LDFLAGS) $(CRT_OBJ) $(OBJS) $(LIBFT) -o $@

run: $(NAME)
	./$(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) -C ../libft re
	$(MAKE) all

-include $(DEPS)
