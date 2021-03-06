CC = gcc
FILES =	lst_new_node lst_add lst_add_n lst_append lst_goto_n lst_add_after \
		lst_pop lst_pop_n lst_remove lst_remove_n lst_delete lst_insert_sorted \
		lst_insert_sorted_rev lst_size
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
