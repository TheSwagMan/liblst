/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_insert_sorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:04:14 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/28 12:17:54 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

int	lst_insert_sorted(t_lst **lst, void *d, int (*f)(void *a, void *b))
{
	if (!lst)
		return (0);
	if (*lst)
	{
		lst_goto_n(lst, 0);
		while ((*lst)->next)
		{
			if (f((*lst)->data, d))
				return (lst_add(lst, d));
			*lst = (*lst)->next;
		}
		if (f((*lst)->data, d))
			return (lst_add(lst, d));
		return (lst_add_after(lst, d));
	}
	else
		return (lst_add(lst, d));
}
