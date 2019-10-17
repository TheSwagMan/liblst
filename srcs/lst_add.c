#include "liblst.h"

int	lst_add(t_lst **lst, void *data)
{
	if (!lst)
		return (0);
	if (!(*lst) && !(*lst = lst_new_node(data)))
		return (0);
	else if (!((*lst)->next = lst_new_node(data)))
		return (0);
	return (1);
}
