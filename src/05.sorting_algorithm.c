/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05.sorting_algorithm.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:58:24 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:55:03 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_stack **lst)
{
	if ((((*lst)->data < (*lst)->next->data))
		&& ((*lst)->next->data) < ((*lst)->next->next->data))
		return ;
	else if (((*lst)->data < (*lst)->next->next->data)
		&& ((*lst)->next->data > (*lst)->next->next->data))
	{
		rra(lst);
		sa(lst);
	}
	else if (((*lst)->data > (*lst)->next->data)
		&& ((*lst)->next->data > (*lst)->next->next->data))
	{
		ra(lst);
		sa(lst);
	}
	else if (((*lst)->next->data < (*lst)->data)
		&& ((*lst)->data < (*lst)->next->next->data))
		sa(lst);
	else if (((*lst)->next->data > (*lst)->data)
		&& ((*lst)->data > (*lst)->next->next->data))
		rra(lst);
	else
		ra(lst);
}

void	sort_all(t_stack **list, int count)
{
	t_stack	*lst_b;
	int		max_idx;
	int		min_idx;

	lst_b = NULL;
	assign_index(list);
	first_push_to_b(list, &lst_b, count);
	sort_three(list);
	while (lst_b)
	{
		max_idx = max_index(list);
		min_idx = min_index(list);
		get_position(list);
		get_position(&lst_b);
		get_targ_pos(list, &lst_b, max_idx, min_idx);
		calc_cost(list, &lst_b);
		find_cheapest_cost(list, &lst_b);
	}
	ft_free_lst(&lst_b);
	get_position(list);
	rotate_a(list, scan_lst(list, min_pos(list)));
}
