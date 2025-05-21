/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07.stack_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:59:49 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:54:52 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	get_position(t_stack **list)
{
	t_stack	*temp;
	int		pos;

	temp = *list;
	pos = 0;
	while (temp)
	{
		temp->pos = pos;
		temp = temp->next;
		pos++;
	}
}

void	get_targ_pos(t_stack **lst_a, t_stack **lst_b, int max, int min)
{
	t_stack	*temp_b;

	temp_b = *lst_b;
	while (temp_b)
	{
		if (temp_b->index > max)
			temp_b->target_pos = pos_min_idx(lst_a, &temp_b, min);
		else
			temp_b->target_pos = scan_lst(lst_a, temp_b->index);
		temp_b = temp_b->next;
	}
}

int	pos_min_idx(t_stack **list_a, t_stack **list_b, int min_idx)
{
	t_stack	*temp_list_a;
	t_stack	*temp_list_b;

	temp_list_a = *list_a;
	temp_list_b = *list_b;
	while (temp_list_a)
	{
		if (temp_list_a->index == min_idx)
		{
			temp_list_b->target_pos = temp_list_a->pos;
			break ;
		}
		temp_list_a = temp_list_a->next;
	}
	return (temp_list_b->target_pos);
}

int	min_pos(t_stack **list)
{
	t_stack	*temp;
	int		min_pos;

	temp = *list;
	min_pos = INT_MAX;
	while (temp)
	{
		if (temp->pos < min_pos)
			min_pos = temp->pos;
		temp = temp->next;
	}
	return (min_pos);
}
