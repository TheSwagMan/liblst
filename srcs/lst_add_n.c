#include "liblst.h"


int	lst_add_n(t_lst **lst, void *data, int n)
{
	lst_goto_n(lst, n);
	return (lst_add(lst, data));
}
