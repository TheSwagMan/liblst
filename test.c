/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:54:34 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/28 09:21:01 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"
#include <stdio.h>

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
	disp_lst(lst);
	lst_delete(&lst, NULL);
	lst_append(&lst, "POP");
	printf("%s\n", lst_pop(&lst));
	printf("%p\n", lst);

	return (0);
}
