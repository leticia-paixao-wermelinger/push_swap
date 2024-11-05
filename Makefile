
COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror -g $(DEB)

SRCS = \
push_swap.c \
errors.c \
push_swap_utils.c \
struct.c \
free_all.c \
swap_ops.c \
push_ops.c \
rotate_ops.c \
rev_rotate_ops.c \
sort.c \
radix_sort.c

OBJS = ${SRCS:.c=.o}

LIBFT = libft/libft.a

NUMBERS = 3 1 5 2 

RAND = 500

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo "push_swap ready to be used"

$(LIBFT): 
	make -s -C libft
	@echo "libft ready to be used"

$(NAME): $(LIBFT) $(MINILIBX) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJS)
	@echo "Objects deleted"

fclean: clean
	make fclean -C libft
	rm -f $(NAME)
	@echo "All cleaned"

re: fclean all

run: re
	./$(NAME) $(NUMBERS)

val: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) $(NUMBERS)

checker: re
	@echo "$(COLOUR_BLUE)Teste passando para os argumentos: $(NUMBERS)$(COLOUR_END)"
	@echo "$(COLOUR_GREEN)Resultado do checker:$(COLOUR_END)$(COLOUR_RED)"
	@./push_swap $(NUMBERS) | ./checker $(NUMBERS)
	@echo "$(COLOUR_GREEN)Quantidade de comandos:$(COLOUR_END)$(COLOUR_RED)"
	@./push_swap $(NUMBERS) | wc -l
	@echo "$(COLOUR_END)"

#	Ordenar aleatoriamente:
#	VAR=$(echo {1..100} | tr " " "\n" | sort --sort=random | tr "\n" " "); ./push_swap $VAR | wc -l

norm:
	@echo "$(COLOUR_BLUE)Passando a Norminette com a flag -R CheckForbiddenSourceHeader: $(COLOUR_END)"
	@-norminette -R CheckForbiddenSourceHeader

sanitize: fclean $(LIBFT) $(MINILIBX) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(LIBFT) $(MINILIBX) -o $(NAME)
	./$(NAME) $(NUMBERS)
