# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:25:15 by tmalheir          #+#    #+#              #
#    Updated: 2024/05/17 12:13:28 by tmalheir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

#! COLOURS-------------------------------------------------------------------- #

RED = \033[31m
GREEN = \033[0;32m
BLUE = \033[0;34m
YELLOW = \033[0;33m
RESET = \033[0m

#! PATHS---------------------------------------------------------------------- #

INC_PATH = include lib/libft lib/ft_printf
OBJ_PATH = obj
SRC_PATH = src
LIBFT_PATH = lib/libft
FT_PRINTF_PATH = lib/ft_printf

#! FILES---------------------------------------------------------------------- #

SRCS = $(addprefix $(SRC_PATH)/, \
		01.main.c \
		02.check_args.c \
		03.create_stack.c \
		04.push_swap.c \
		06.stack_index.c \
		05.sorting_algorithm.c \
		07.stack_position.c \
		08.costs.c \
		09.moves.c \
		10.push.c \
		11.rev_rotate.c \
		12.rotate.c \
		13.swap.c \
		14.utils_args.c \
		15.utils_lists.c)
OBJS = $(SRCS:$(SRC_PATH)/%.c=$(OBJ_PATH)/%.o)
LIBFT = $(addprefix $(LIBFT_PATH)/, libft.a)
FT_PRINTF = $(addprefix $(FT_PRINTF_PATH)/, ft_printf.a)

#! FLAGS---------------------------------------------------------------------- #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
CPPFLAGS = $(addprefix -I ,$(INC_PATH)) -MMD -MP
LDLIBS = $(LIBFT) $(FT_PRINTF)
LDFLAGS = -ldl -lglfw -pthread
.SILENT:

#! TARGETS-------------------------------------------------------------------- #

all: $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c | $(OBJ_PATH)
		$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

$(OBJ_PATH):
		mkdir -p $(OBJ_PATH)

$(NAME): $(OBJS) $(LIBFT) $(FT_PRINTF)
		$(CC) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)
		@echo "$(YELLOW)------------------------$(RESET)\n"
		@echo "✨ $(BLUE)$(NAME)$(RESET) is Ready$(RESET) ✨\n"
		@echo "$(YELLOW)------------------------$(RESET)\n"

$(LIBFT):
		$(MAKE) -C $(LIBFT_PATH)

$(FT_PRINTF):
		$(MAKE) -C $(FT_PRINTF_PATH)

clean:
		rm -rf $(OBJ_PATH)
		$(MAKE) -C $(LIBFT_PATH) clean
		$(MAKE) -C $(FT_PRINTF_PATH) clean
		@echo "$(YELLOW)Cleaning now$(RESET) 🚿\n"

fclean: clean
		rm -f $(NAME)
		$(MAKE) -C $(LIBFT_PATH) fclean
		$(MAKE) -C $(FT_PRINTF_PATH) fclean
		@echo "$(GREEN)All done$(RESET) 🎊\n"

re: fclean all

.PHONY: all clean fclean re


