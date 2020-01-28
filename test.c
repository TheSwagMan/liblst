/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:54:34 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/28 12:18:11 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"
#include <stdio.h>
#include <string.h>

int		comp(void *a, void *b)
{
	return (strcmp((char *)a, (char *)b) > 0);
}

void	disp_lst(t_lst *lst)
{
	lst_goto_n(&lst, 0);
	while (lst)
	{
		printf("%s ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

int		main(void)
{
	t_lst	*lst;

	lst = NULL;
	if (!lst_append(&lst, "Hello"))
		return (-1);
	if (!lst_append(&lst, "World"))
		return (-1);
	disp_lst(lst);
	lst_add_n(&lst, "My", 1);
	lst_add_n(&lst, "Ok,", 0);
	lst_goto_n(&lst, 0);
	lst_add(&lst, "FIRST");
	disp_lst(lst);
	lst_delete(&lst, NULL);
	lst_insert_sorted(&lst, "1", comp);
	lst_insert_sorted(&lst, "2", comp);
	lst_insert_sorted(&lst, "4", comp);
	lst_insert_sorted(&lst, "3", comp);
	lst_insert_sorted(&lst, "10", comp);
	lst_insert_sorted(&lst, "9", comp);
	lst_insert_sorted(&lst, "7", comp);
	disp_lst(lst);
	return (0);
}
