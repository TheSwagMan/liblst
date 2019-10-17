#include "liblst.h"
#include <stdio.h>

int main(void)
{
	t_lst	*lst;

	lst = NULL;
	if (!lst_append(&lst, "Hello"))
		return (-1);
	if (!lst_append(&lst, "World"))
		return (-1);
	if (!lst_append(&lst, "My"))
		return (-1);
	if (!lst_append(&lst, "Dear"))
		return (-1);
	if (!lst_append(&lst, "Friends"))
		return (-1);
	lst_goto_n(&lst, 0);
	while (lst)
	{
		printf("%s\n", lst->data);
		lst = lst->next;
	}
	return (0);
}

