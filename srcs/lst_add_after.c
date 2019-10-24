#include "liblst.h"

int	lst_add_after(t_lst **lst, void *data)
{
	t_lst	*t;

	if (!lst)
		return (0);
	if (!(*lst))
		return (lst_add(lst, data));
	else
	{
		t = (*lst)->next;
		if (!((*lst)->next = lst_new_node(data)))
			return (0);
		if (t)
			t->prev = *lst;
		(*lst)->next->next = t;
		(*lst)->next->prev = *lst;
	}
	return (1);
}
