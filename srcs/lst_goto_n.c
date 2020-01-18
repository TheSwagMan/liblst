/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_goto_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:55:15 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/18 01:57:05 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

#include <stdio.h>

int	lst_goto_n(t_lst **lst, int n)
{
	if (!lst)
		return (-1);
	if (!(*lst))
		return (1);
	if (n >= 0)
	{
		while ((*lst)->prev)
			*lst = (*lst)->prev;
		while (n--)
			if (!(*lst)->next && n)
				return (1);
			else
				*lst = (*lst)->next;
	}
	else
	{
		while ((*lst)->next)
			*lst = (*lst)->next;
		while (++n)
			if (!(*lst)->prev)
				return (1);
			else
				*lst = (*lst)->prev;
	}
	return (0);
}
