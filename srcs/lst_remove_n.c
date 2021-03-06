/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_remove_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:55:39 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/18 01:55:40 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	lst_remove_n(t_lst **lst, void (*f)(void *d), int n)
{
	if (!lst)
		return ;
	f(lst_pop_n(lst, n));
}
