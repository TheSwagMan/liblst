#include "liblst.h"


int	lst_append(t_lst **lst, void *data)
{
	return (lst_add_n(lst, data, -1));
}
