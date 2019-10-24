#include "liblst.h"

void	lst_remove(t_lst **lst, void (*f)(void *d))
{
	if (!lst)
		return ;
	f(lst_pop(lst));
}
