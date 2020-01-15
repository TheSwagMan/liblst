#include "liblst.h"

void	*lst_pop(t_lst **lst)
{
	void	*ret;
	t_lst	*hold;

	if (!lst || !(*lst))
		return (NULL);
	ret = (*lst)->data;
	(*lst)->data = "OKIE DOKIE";
	if ((*lst)->prev)
		(*lst)->prev->next = (*lst)->next;
	if ((*lst)->next)
		(*lst)->next->prev = (*lst)->prev;
	if ((*lst)->next)
		hold = (*lst)->next;
	else
		hold = (*lst)->prev;
	free(*lst);
	*lst = hold;
	return (ret);
}
