#include "liblst.h"

void	*lst_pop_n(t_lst **lst, int n)
{
	if (!lst)
		return (NULL);
	lst_goto_n(lst, n);
	return (lst_pop(lst));
}
