/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lists.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:36:12 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/15 16:41:19 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_count_lst(t_stack *list)
{
	int	count;

	count = 0;
	while (list)
	{
		list = list->next;
		count++;
	}
	return (count);
}

void	ft_free_lst(t_stack **list)
{
	t_stack	*curr;
	t_stack	*temp;

	curr = *list;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}

int	scan_lst(t_stack **list_a, int idx_b)
{
	t_stack	*temp_a;
	int		target_idx;
	int		target_pos;

	temp_a = *list_a;
	target_idx = INT_MAX;
	target_pos = 0;
	while (temp_a)
	{
		if (temp_a->index > idx_b && temp_a->index < target_idx)
		{
			target_idx = temp_a->index;
			target_pos = temp_a->pos;
		}
		temp_a = temp_a->next;
	}
	return (target_pos);
}
