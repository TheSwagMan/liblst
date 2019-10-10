#include "liblst.h"

void	lst_goto_n(t_lst **lst, int n)
{
	if (!lst || !*lst)
		return ;
	if (n >= 0)
	{
		while ((*lst)->prev)
			*lst = (*lst)->prev;
		while ((*lst)->next && n--)
			*lst = (*lst)->next;
	}
	else
	{
		while ((*lst)->next)
			*lst = (*lst)->next;
		while ((*lst)->prev && ++n)
			*lst = (*lst)->prev;
	}
}
