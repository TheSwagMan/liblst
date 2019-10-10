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
