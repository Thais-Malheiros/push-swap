/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11.rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:57:27 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:48:24 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rev_rotate(t_stack **lst)
{
	t_stack	*node_1;
	t_stack	*node_2;
	t_stack	*node_3;

	if ((*lst)->next)
	{
		node_1 = *lst;
		node_2 = *lst;
		while (node_2->next->next)
			node_2 = node_2->next;
		node_3 = *lst;
		while (node_3->next)
			node_3 = node_3->next;
		node_3->next = node_1;
		node_2->next = NULL;
		*lst = node_3;
	}
}

void	rra(t_stack **lst)
{
	rev_rotate(lst);
	ft_printf("rra\n");
}

void	rrb(t_stack **lst)
{
	rev_rotate(lst);
	ft_printf("rrb\n");
}

void	rrr(t_stack **lst_a, t_stack **lst_b)
{
	rev_rotate(lst_a);
	rev_rotate(lst_b);
	ft_printf("rrr\n");
}
