CC = gcc
FILES = lst_new_node
IFILES = liblst.h
NAME = liblst.a
SDIR = srcs/
IDIR = incs/

CFLAGS = -Wall -Wextra -Werror -I$(IDIR) -MMD -MP

SRCS = $(addprefix $(SDIR), $(addsuffix .c, $(FILES)))
INCS = $(addprefix $(IDIR), $(IFILES))
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all $(name) clean fclean re
-include $(DEPS)
