/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pop_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:55:29 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/18 01:55:32 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	*lst_pop_n(t_lst **lst, int n)
{
	if (!lst)
		return (NULL);
	lst_goto_n(lst, n);
	return (lst_pop(lst));
}
