/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_after.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:54:51 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/18 01:54:53 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

int	lst_add_after(t_lst **lst, void *data)
{
	t_lst	*t;
	t_lst	*current;
	t_lst	*next;

	if (!lst)
		return (0);
	if (!(*lst))
		return (lst_add(lst, data));
	else
	{
		current = *lst;
		next = (*lst)->next;
		if (!(t = lst_new_node(data)))
			return (0);
		t->next = next;
		t->prev = current;
		current->next = t;
		if (next)
			next->prev = t;
	}
	return (1);
}
