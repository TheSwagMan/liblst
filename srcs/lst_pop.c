/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:55:24 by tpotier           #+#    #+#             */
/*   Updated: 2020/03/09 15:42:17 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	*lst_pop(t_lst **lst)
{
	void	*ret;
	t_lst	*hold;

	if (!lst || !(*lst))
		return (NULL);
	ret = (*lst)->data;
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
