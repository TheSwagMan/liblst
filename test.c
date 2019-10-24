#include "liblst.h"
#include <stdio.h>

void clean(void *c)
{
	printf("Cleaned: %s\n", c);
}

int main(void)
{
	t_lst	*lst;
	t_lst	*t_lst;

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
	lst_add_n(&lst, "1", 1);
	lst_add_n(&lst, "0", 0);
	lst_add_n(&lst, "-1", -1);
	lst_add_n(&lst, "-9", -9);
	lst_add_n(&lst, "-8", -8);
	lst_add_n(&lst, "-100", -100);
	t_lst = lst;
	lst_goto_n(&t_lst, 0);
	while (t_lst)
	{
		printf("%s\n", t_lst->data);
		t_lst = t_lst->next;
	}
	t_lst = lst;
	lst_goto_n(&t_lst, 0);
	while (t_lst->next)
		t_lst = t_lst->next;
	printf("current: %s\n", t_lst->data);
	printf("popped: %s\n", lst_pop(&t_lst));
	t_lst = lst;
	lst_goto_n(&t_lst, 0);
	while (t_lst)
	{
		printf("%s\n", t_lst->data);
		t_lst = t_lst->next;
	}
	t_lst = lst;
	lst_goto_n(&t_lst, 0);
	while (t_lst->next)
		t_lst = t_lst->next;
	printf("current: %s\n", t_lst->data);
	printf("popped: %s\n", lst_pop(&t_lst));
	t_lst = lst;
	lst_goto_n(&t_lst, 0);
	while (t_lst)
	{
		printf("%s\n", t_lst->data);
		t_lst = t_lst->next;
	}
	t_lst = lst;
	lst_goto_n(&t_lst, 0);
	while (t_lst->next)
		t_lst = t_lst->next;
	printf("popped: %s\n", lst_pop_n(&t_lst, 0));
	lst_goto_n(&t_lst, 0);
	while (t_lst->next)
	{
		printf("%s\n", t_lst->data);
		t_lst = t_lst->next;
	}
	printf("popped: %s\n", lst_pop_n(&t_lst, 0));
	lst_goto_n(&t_lst, 0);
	while (t_lst->next)
	{
		printf("%s\n", t_lst->data);
		t_lst = t_lst->next;
	}
	printf("popped: %s\n", lst_pop_n(&t_lst, -100));
	lst_goto_n(&t_lst, 0);
	while (t_lst->next)
	{
		printf("%s\n", t_lst->data);
		t_lst = t_lst->next;
	}
	lst_goto_n(&t_lst, 0);
	printf("%s\n", t_lst->data);
	lst_delete(&t_lst, &clean);
	return (0);
}

