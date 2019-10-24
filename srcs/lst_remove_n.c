#include "liblst.h"

void	lst_remove_n(t_lst **lst, void (*f)(void *d), int n)
{
	if (!lst)
		return ;
	f(lst_pop_n(lst, n));
}
