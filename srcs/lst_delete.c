#include "liblst.h"

void	lst_delete(t_lst **lst, void (*f)(void *d))
{
	if (!lst)
		return ;
	lst_goto_n(lst, 0);
	while (*lst)
		if (f)
			f(lst_pop(lst));
		else
			lst_pop(lst);
}
