/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09.moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:01:53 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:49:01 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rev_rot_both(t_stack **lst_a, t_stack **lst_b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rrr(lst_a, lst_b);
	}
}

void	rot_both(t_stack **lst_a, t_stack **lst_b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 & *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		rr(lst_a, lst_b);
	}
}

void	rotate_a(t_stack **lst, int cost)
{
	while (cost)
	{
		if (cost > 0)
		{
			ra(lst);
			(cost)--;
		}
		else if (cost < 0)
		{
			rra(lst);
			(cost)++;
		}
	}
}

void	rotate_b(t_stack **lst, int cost)
{
	while (cost)
	{
		if (cost > 0)
		{
			rb(lst);
			(cost)--;
		}
		else if (cost < 0)
		{
			rrb(lst);
			(cost)++;
		}
	}
}

void	do_move(t_stack **lst_a, t_stack **lst_b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		rev_rot_both(lst_a, lst_b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		rot_both(lst_a, lst_b, &cost_a, &cost_b);
	rotate_a(lst_a, cost_a);
	rotate_b(lst_b, cost_b);
	push_a(lst_b, lst_a);
}
