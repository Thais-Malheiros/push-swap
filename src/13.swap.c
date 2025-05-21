/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13.swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:05:18 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:40:48 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_stack **lst)
{
	t_stack	*node_1;
	t_stack	*node_2;
	t_stack	*node_3;

	if ((*lst)->next)
	{
		node_1 = *lst;
		node_2 = (*lst)->next;
		node_3 = (*lst)->next->next;
		node_2->next = node_1;
		node_1->next = node_3;
		*lst = node_2;
	}
}

void	sa(t_stack **lst)
{
	swap(lst);
	ft_printf("sa\n");
}

void	sb(t_stack **lst)
{
	swap(lst);
	ft_printf("sb\n");
}
