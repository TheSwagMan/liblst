#include "liblst.h"


int	lst_add_n(t_lst **lst, void *data, int n)
{
	int	r;

	if ((r = lst_goto_n(lst, n)) == -1)
		return (0);
	if (n >= 0 || r == 1)
		return (lst_add(lst, data));
	return (lst_add_after(lst, data));
}
