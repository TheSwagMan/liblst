/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 01:55:50 by tpotier           #+#    #+#             */
/*   Updated: 2020/02/25 17:38:48 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLST_H
# define LIBLST_H

# include <stdlib.h>

# include <stdio.h>

typedef struct		s_lst
{
	void			*data;
	struct s_lst	*prev;
	struct s_lst	*next;
}					t_lst;

t_lst				*lst_new_node(void *data);
int					lst_goto_n(t_lst **lst, int n);
int					lst_append(t_lst **lst, void *data);
int					lst_add(t_lst **lst, void *data);
int					lst_add_n(t_lst **lst, void *data, int n);
int					lst_add_after(t_lst **lst, void *data);
void				*lst_pop(t_lst **lst);
void				*lst_pop_n(t_lst **lst, int n);
void				lst_remove(t_lst **lst, void (*f)(void *d));
void				lst_remove_n(t_lst **lst, void (*f)(void *d), int n);
void				lst_delete(t_lst **lst, void (*f)(void *d));
int					lst_insert_sorted(t_lst **lst, void *d, \
		int (*f)(void *a, void *b));
int					lst_size(t_lst *lst);

#endif
