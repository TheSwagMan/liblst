/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:54:44 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/18 01:54:45 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

int	lst_add(t_lst **lst, void *data)
{
	t_lst	*t;

	if (!lst)
		return (0);
	if (!(*lst))
	{
		if (!(*lst = lst_new_node(data)))
			return (0);
	}
	else
	{
		t = *lst;
		if (!(*lst = lst_new_node(data)))
			return (0);
		if (t->prev)
			t->prev->next = *lst;
		(*lst)->prev = t->prev;
		(*lst)->next = t;
		t->prev = *lst;
	}
	return (1);
}
