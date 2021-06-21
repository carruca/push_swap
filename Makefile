NAME			= push_swap

LIBFT_DIR		= libft/
LNAME			= $(LIBFT_DIR)libft.a

SRC_DIR			= src/
SRC				= main.c \
				  add_to_stack.c \
				  error_handler.c \
				  extract_argv.c \
				  is_duplicate.c \
				  swap.c \
				  push.c \
				  print_number.c \

OBJ				= $(SRC:.c=.o)
INC				= -I. -I$(LIBFT_DIR)
LIBFT			= -L $(LIBFT_DIR) -lft

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror $(INC) -O3 $(COMMON)
DEBUG			= -g3
SANITIZE		= -fsanitize=address
COMMON			= 
LDFLAGS			= $(COMMON) 
MAKE			= make
RM				= rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(LNAME)
	$(CC) $(OBJ) -o $(NAME) $(LIBFT) $(TERMCAP) $(LDFLAGS)

sanitize:	COMMON += $(SANITIZE) $(DEBUG)
sanitize:	all

$(LNAME): 
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJ)
	$(RM) tag

tag:
	ctags $(SRC) $(LIBFT_DIR)*.c

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
