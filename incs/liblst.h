#ifndef LIBLST_H
# define LIBLST_H

# include <stdlib.h>

typedef struct		s_lst
{
	void			*data;
	struct s_lst	*prev;
	struct s_lst	*next;
}					t_lst;

t_lst				*lst_new_node(void *data);
void				lst_goto_n(t_lst **lst, int n);
int					lst_append(t_lst **lst, void *data);
int					lst_add(t_lst **lst, void *data);
int					lst_add_n(t_lst **lst, void *data, int n);
void				*lst_pop(t_lst **lst);
void				*lst_pop_n(t_lst **lst, int n);
void				lst_remove(t_lst **lst, void (*f)(void *d));
void				lst_remove_n(t_lst **lst, void (*f)(void *d), int n);
void				lst_delete(t_lst **lst, void (*f)(void *d));

#endif
