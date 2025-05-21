/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06.stack_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:55:32 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:47:17 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	assign_index(t_stack **list)
{
	t_stack	*cur;
	t_stack	*nxt;
	int		idx;

	cur = *list;
	while (cur)
	{
		idx = 1;
		nxt = *list;
		while (nxt)
		{
			if (nxt->data < cur->data)
				idx++;
			nxt = nxt->next;
		}
		cur->index = idx;
		cur = cur->next;
	}
}

int	max_index(t_stack **list)
{
	t_stack	*temp;
	int		max_index;

	temp = *list;
	max_index = temp->index;
	while (temp)
	{
		if (temp->index > max_index)
			max_index = temp->index;
		else
			temp = temp->next;
	}
	return (max_index);
}

int	min_index(t_stack **list)
{
	t_stack	*temp;
	int		min_index;

	temp = *list;
	min_index = temp->index;
	while (temp)
	{
		if (temp->index < min_index)
			min_index = temp->index;
		else
			temp = temp->next;
	}
	return (min_index);
}
