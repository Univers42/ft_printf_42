# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/23 06:14:30 by dlesieur          #+#    #+#              #
#    Updated: 2025/03/23 06:51:30 by dlesieur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ============================================================================ #
# =====                          CONFIGURATION                            ===== #
# ============================================================================ #

NAME			=	libftprintf.a

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra -g3 -O0
AR				=	ar
ARFLAGS 		=	rcs
RM				=	rm -rf
BUILD_DIR		=	build
# Directories
SRC_DIR			=	src
INCLUDE_DIR		=	include
OBJ_DIR			=	obj
LIBFT_DIR		=	libft

# ============================================================================ #
# =====                          SOURCE FILES                             ===== #
# ============================================================================ #
# Source files by directory
UTILS_JUMP_SRCS		=	$(SRC_DIR)/_utils_jump_table/ft_convert_wrappers_two.c $(SRC_DIR)/_utils_jump_table/ft_convert_wrappers.c  \
						$(SRC_DIR)/_utils_jump_table/ft_flag_wrappers_two.c $(SRC_DIR)/_utils_jump_table/ft_flag_wrappers.c

CORE_SRCS			=	$(SRC_DIR)/core/ft_flags_init.c $(SRC_DIR)/core/ft_parser.c $(SRC_DIR)/core/ft_printf.c

FORMAT_SRCS			=	$(SRC_DIR)/format_specifier/ft_char.c $(SRC_DIR)/format_specifier/ft_hex.c $(SRC_DIR)/format_specifier/ft_int.c \
						$(SRC_DIR)/format_specifier/ft_percent.c $(SRC_DIR)/format_specifier/ft_ptr.c \
						$(SRC_DIR)/format_specifier/ft_str.c $(SRC_DIR)/format_specifier/ft_unsigned.c

HELPERS_SRCS		=	$(SRC_DIR)/helpers/ft_flag_instructions.c $(SRC_DIR)/helpers/ft_utils_format.c $(SRC_DIR)/helpers/ft_utils_int.c \
						$(SRC_DIR)/helpers/ft_utils_ptr.c $(SRC_DIR)/helpers/generic_utils.c

JUMP_TABLE_SRCS		=	$(SRC_DIR)/jump_table/ft_init.c $(SRC_DIR)/jump_table/ft_jump_flags.c

PRECISION_SRCS		=	$(SRC_DIR)/precision/ft_precision_core.c $(SRC_DIR)/precision/ft_precision_hex.c $(SRC_DIR)/precision/ft_precision_int.c

WIDTH_SRCS			=	$(SRC_DIR)/width/ft_width_core.c $(SRC_DIR)/width/ft_width_hex.c $(SRC_DIR)/width/ft_width_int.c \
						$(SRC_DIR)/width/ft_width_ptr.c $(SRC_DIR)/width/ft_width_ptr_extra.c

# Combine all source files
SRCS			=		$(UTILS_JUMP_SRCS) $(CORE_SRCS) $(FORMAT_SRCS) $(HELPERS_SRCS) $(JUMP_TABLE_SRCS) $(PRECISION_SRCS) $(WIDTH_SRCS)

# Generate objects with directory structure preserved
OBJS			=	$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

# Create list of subdirectories for object files
OBJ_SUBDIRS		=	$(sort $(dir $(OBJS)))

# Libft
LIBFT			=	$(LIBFT_DIR)/libft.a

# **************************************************************************** #
#                                                                              #
#                          FT_PRINTF LIBRARY MAKEFILE                          #
#                                                                              #
# **************************************************************************** #

# ============================================================================ #
# =====                         TERMINAL COLORS                           ===== #
# ============================================================================ #

# ----- Text Colors ----- #
BLACK       = \033[0;30m
RED         = \033[0;31m
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
BLUE        = \033[0;34m
MAGENTA     = \033[0;35m
CYAN        = \033[0;36m
WHITE       = \033[0;37m

# ----- Bold Text ----- #
BBLACK      = \033[1;30m
BRED        = \033[1;31m
BGREEN      = \033[1;32m
BYELLOW     = \033[1;33m
BBLUE       = \033[1;34m
BMAGENTA    = \033[1;35m
BCYAN       = \033[1;36m
BWHITE      = \033[1;37m

# ----- Background Colors ----- #
BG_BLACK    = \033[40m
BG_RED      = \033[41m
BG_GREEN    = \033[42m
BG_YELLOW   = \033[43m
BG_BLUE     = \033[44m
BG_MAGENTA  = \033[45m
BG_CYAN     = \033[46m
BG_WHITE    = \033[47m

# ----- Special ----- #
RESET       = \033[0m
BOLD        = \033[1m
UNDERLINE   = \033[4m
BLINK       = \033[5m
REVERSE     = \033[7m
HIDDEN      = \033[8m


# ============================================================================ #
# =====                         TARGETS & RULES                           ===== #
# ============================================================================ #

# ----- Default Target ----- #
all: banner $(NAME)

# ----- Banner Display ----- #
banner:
	@printf "\n$(BBLUE)╔═════════════════════════════════════════════════════════════╗$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BMAGENTA)ft_printf Library$(RESET)                                          $(BBLUE) ║$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(CYAN)Build started at: $(shell date '+%H:%M:%S')$(RESET)                                  $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)╚═════════════════════════════════════════════════════════════╝$(RESET)\n\n"

# ----- Library Creation ----- #
$(NAME): $(LIBFT) $(OBJS)
	@printf "$(BYELLOW)[ASSEMBLING]$(RESET) Creating library archive...\n"
	@cp $(LIBFT) $(NAME)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@printf "$(BGREEN)[SUCCESS]$(RESET) $(UNDERLINE)$(NAME)$(RESET) has been created! ✓\n\n"
	@printf "$(BBLUE)╔═════════════════════════════════════════════════════════════╗$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BGREEN)Build completed successfully at: $(shell date '+%H:%M:%S')      $(RESET)             $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)╚═════════════════════════════════════════════════════════════╝$(RESET)\n\n"

# ----- Run Target ----- #
run: all
	@printf "$(BYELLOW)[EXECUTING]$(RESET) Building with test main...\n"
	@mkdir -p $(BUILD_DIR)
	@$(CC) $(CFLAGS) -I $(INCLUDE_DIR) main.c $(NAME) -o $(BUILD_DIR)/outDebug
	@printf "$(BGREEN)[SUCCESS]$(RESET) Executable created at $(UNDERLINE)$(BUILD_DIR)/outDebug$(RESET) ✓\n"

# ----- Create Object Directories ----- #
$(OBJ_SUBDIRS):
	@mkdir -p $@

# ----- Compile C Files to Objects ----- #
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@printf "$(BCYAN)[COMPILING]$(RESET) $<\n"
	@$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

# ----- Build Libft ----- #
$(LIBFT):
	@printf "$(BMAGENTA)[LIBFT]$(RESET) Building dependency library...\n"
	@$(MAKE) -C $(LIBFT_DIR)
	@printf "$(BGREEN)[SUCCESS]$(RESET) Libft compiled successfully! ✓\n"

# ----- Bonus Target for Tester Compatibility ----- #
bonus: all

# ----- Clean Object Files ----- #
clean:
	@printf "\n$(BG_YELLOW)$(BLACK) CLEANING $(RESET) $(BBLACK)╾──────────────────────────────────────────────╼$(RESET)\n\n"
	@printf "$(BYELLOW)[1/3]$(RESET) $(YELLOW)Initiating cleanup procedure...$(RESET)\n"
	@sleep 0.2
	@printf "$(BYELLOW)[2/3]$(RESET) $(YELLOW)Cleaning libft objects...$(RESET)\n"
	@$(MAKE) -C $(LIBFT_DIR) clean
	@sleep 0.2
	@printf "$(BYELLOW)[3/3]$(RESET) $(YELLOW)Removing object directories...$(RESET)\n"
	@$(RM) $(OBJ_DIR)
	@sleep 0.3
	@printf "\n$(BGREEN)╔════════════════════════════════════════════════════════╗$(RESET)\n"
	@printf "$(BGREEN)║$(RESET)  🧹 $(GREEN)Cleanup complete! All object files removed.$(RESET)        $(BGREEN)║$(RESET)\n"
	@printf "$(BGREEN)╚════════════════════════════════════════════════════════╝$(RESET)\n\n"

# ----- Clean Everything ----- #
fclean: 
	@printf "\n$(BG_RED)$(WHITE) FULL CLEANUP $(RESET) $(BRED)╾────────────────────────────────────────╼$(RESET)\n\n"
	@printf "$(BRED)[1/5]$(RESET) $(RED)Initiating full cleanup sequence...$(RESET)\n"
	@sleep 0.2
	@printf "$(BRED)[2/5]$(RESET) $(RED)Removing object files from libft...$(RESET)\n"
	@$(MAKE) -C $(LIBFT_DIR) clean
	@sleep 0.2
	@printf "$(BRED)[3/5]$(RESET) $(RED)Purging object directories...$(RESET)\n"
	@$(RM) $(OBJ_DIR)
	@sleep 0.2
	@printf "$(BRED)[4/5]$(RESET) $(RED)Removing libft library...$(RESET)\n"
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@sleep 0.2
	@printf "$(BRED)[5/5]$(RESET) $(RED)Deleting $(NAME) library...$(RESET)\n"
	@$(RM) $(NAME)
	@$(RM) $(BUILD_DIR)
	@sleep 0.3
	@printf "\n$(BGREEN)╔════════════════════════════════════════════════════════╗$(RESET)\n"
	@printf "$(BGREEN)║$(RESET)  🔥 $(GREEN)Full cleanup complete! All generated files removed.$(RESET)$(BGREEN)║$(RESET)\n"
	@printf "$(BGREEN)╚════════════════════════════════════════════════════════╝$(RESET)\n\n"

# ----- Rebuild ----- #
re: fclean all

# ----- Help ----- #
help:
	@printf "\n$(BBLUE)╔═════════════════════════════════════════════════════════════╗$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BMAGENTA)ft_printf Library - Available Commands$(RESET)                      $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)╠═════════════════════════════════════════════════════════════╣$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BGREEN)make$(RESET)        - Build the ft_printf library                   $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BGREEN)make run$(RESET)    - Build and run with test main                  $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BGREEN)make clean$(RESET)  - Remove object files                           $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BGREEN)make fclean$(RESET) - Remove all generated files                    $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BGREEN)make re$(RESET)     - Rebuild everything                            $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)║$(RESET) $(BGREEN)make help$(RESET)   - Display this help message                     $(BBLUE)║$(RESET)\n"
	@printf "$(BBLUE)╚═════════════════════════════════════════════════════════════╝$(RESET)\n\n"

# ----- PHONY Targets ----- #
.PHONY: all clean fclean re bonus run banner help
