/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12.rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:02:34 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:42:43 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_stack **lst)
{
	t_stack	*node_1;
	t_stack	*node_2;
	t_stack	*node_3;

	if ((*lst)->next)
	{
		node_1 = *lst;
		node_2 = (*lst)->next;
		node_3 = *lst;
		while (node_3->next)
			node_3 = node_3->next;
		node_2->next = (*lst)->next->next;
		node_3->next = node_1;
		node_1->next = NULL;
		*lst = node_2;
	}
}

void	ra(t_stack **lst)
{
	rotate(lst);
	ft_printf("ra\n");
}

void	rb(t_stack **lst)
{
	rotate(lst);
	ft_printf("rb\n");
}

void	rr(t_stack **lst_a, t_stack **lst_b)
{
	rotate(lst_a);
	rotate(lst_b);
	ft_printf("rr\n");
}
