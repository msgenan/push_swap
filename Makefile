NAME = push_swap
SRCS = ./src/push_swap.c \
       ./src/utils.c \
       ./src/argument.c \
	   ./src/actions/actions_s.c \
	   ./src/actions/actions_r.c \
	   ./src/actions/actions_p.c 

BUILD_DIR = build
OBJS = $(SRCS:./src/%.c=$(BUILD_DIR)/%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
MY_LIB_PATH = ./src/my_lib
MY_LIB = $(MY_LIB_PATH)/my_lib.a

COLOR_LIGHT_GREEN = \033[0;92m

all: $(NAME)

$(NAME): $(OBJS) $(MY_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(MY_LIB) -o $(NAME)
	@echo "✅ Build completed."

# .o dosyalarını build/ klasörüne yerleştir
$(BUILD_DIR)/%.o: ./src/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(MY_LIB):
	@make -C $(MY_LIB_PATH) > /dev/null 2>&1

clean:
	@rm -rf $(BUILD_DIR)
	@make clean -C $(MY_LIB_PATH) > /dev/null 2>&1
	@echo "🗑️  Object files removed."

fclean: clean
	@rm -rf $(NAME)
	@echo "🗑️  Executable removed."

re: fclean all

.PHONY: all clean fclean re
