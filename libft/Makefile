# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/07 06:16:33 by ikawamuk          #+#    #+#              #
#    Updated: 2026/11/08 17:31:52 by ikawamuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME        := libft.a

CC          := cc
ASM         := nasm
AR          := ar

CFLAGS      := -Wall -Wextra -Werror -g -fPIE
CPPFLAGS    := -Iinclude -Isrc/stdio/printf_core/include
ASMFLAGS    := -f elf64

SRC_DIR     := src
OBJ_DIR     := obj

C_SRCS      := $(shell find $(SRC_DIR) -type f -name '*.c')
ASM_SRCS    := $(shell find $(SRC_DIR) -type f -name '*.s')

C_OBJS      := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(C_SRCS))
ASM_OBJS    := $(patsubst $(SRC_DIR)/%.s,$(OBJ_DIR)/%.o,$(ASM_SRCS))

OBJS        := $(C_OBJS) $(ASM_OBJS)
DEPS        := $(C_OBJS:.o=.d)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MP -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.s
	@mkdir -p $(dir $@)
	$(ASM) $(ASMFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)
