/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08.costs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:15:34 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 12:16:30 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	calc_cost(t_stack **lst_a, t_stack **lst_b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = *lst_a;
	tmp_b = *lst_b;
	size_a = ft_count_lst(*lst_a);
	size_b = ft_count_lst(*lst_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->pos;
		tmp_b->cost_a = tmp_b->target_pos;
		if (tmp_b->pos > (size_b / 2))
			tmp_b->cost_b = (size_b - tmp_b->pos) * (-1);
		if (tmp_b->target_pos > (size_a / 2))
			tmp_b->cost_a = (size_a - tmp_b->target_pos) * (-1);
		tmp_b = tmp_b->next;
	}
}

void	find_cheapest_cost(t_stack **lst_a, t_stack **lst_b)
{
	t_stack	*tmp;
	int		cheapest;
	int		cost_a;
	int		cost_b;

	tmp = *lst_b;
	cheapest = INT_MAX;
	while (tmp)
	{
		if (ft_nbr_abs(tmp->cost_a) + ft_nbr_abs(tmp->cost_b) < cheapest)
		{
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
			cheapest = ft_nbr_abs(tmp->cost_a) + ft_nbr_abs(tmp->cost_b);
		}
		tmp = tmp->next;
	}
	do_move(lst_a, lst_b, cost_a, cost_b);
}
