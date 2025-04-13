NAME = my_lib.a
SRCS = ft_atoi.c \
ft_strlen.c \
ft_strchr.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_split.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_strncmp.c \
ft_print_list.c \

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
BOBJS = $(BONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)


re: fclean all


.PHONY: all clean re fclean