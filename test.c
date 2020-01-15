#include "liblst.h"
#include <stdio.h>

void disp_lst(t_lst *lst)
{
	lst_goto_n(&lst, 0);
	while (lst)
	{
		printf("%s ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

int main(void)
{
	t_lst	*lst;

	lst = NULL;
	if (!lst_append(&lst, "Hello"))
		return (-1);
	if (!lst_append(&lst, "World"))
		return (-1);
	disp_lst(lst);
	lst_add_n(&lst, "My", 1);
	disp_lst(lst);
	lst_delete(&lst, NULL);
	return (0);
}

