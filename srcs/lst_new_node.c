/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:55:21 by tpotier           #+#    #+#             */
/*   Updated: 2020/01/18 01:55:21 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

t_lst	*lst_new_node(void *data)
{
	t_lst	*node;

	if (!(node = (t_lst *)malloc(sizeof(*node))))
		return (NULL);
	node->data = data;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
