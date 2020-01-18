/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:55:10 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/18 01:55:12 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	lst_delete(t_lst **lst, void (*f)(void *d))
{
	if (!lst)
		return ;
	lst_goto_n(lst, 0);
	while (*lst)
		if (f)
			f(lst_pop(lst));
		else
			lst_pop(lst);
}
