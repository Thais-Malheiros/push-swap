/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02.check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:12:20 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 14:41:30 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_order(t_stack *list, int (*cmp)(int, int))
{
	t_stack	*temp;

	temp = list;
	while (list->next)
	{
		if (((*cmp)(list->data, list->next->data)) == 0)
			list = list->next;
		else if (list->data == list->next->data)
		{
			ft_error();
			exit (EXIT_FAILURE);
		}
		else
			break ;
	}
	if (!list->next)
	{
		ft_free_lst(&temp);
		exit (EXIT_SUCCESS);
	}
}

void	check_errors(char *str, long nbr)
{
	if ((!str[0] || str == NULL) || (nbr < INT_MIN || nbr > INT_MAX))
		ft_error();
}

void	check_repeat(char **argv)
{
	t_idx	i;

	i.str1 = 1;
	while (argv[i.str1])
	{
		i.str2 = i.str1 + 1;
		while (argv[i.str2])
		{
			i.idx = 0;
			while (argv[i.str1][i.idx] && argv[i.str2][i.idx])
			{
				if (argv[i.str1][i.idx] == argv[i.str2][i.idx])
					i.idx++;
				else
					break ;
			}
			if (!argv[i.str1][i.idx] && !argv[i.str2][i.idx])
				ft_error();
			i.str2++;
		}
		i.str1++;
	}
}

void	check_argv(char **argv)
{
	int		idx_argv;
	long	nbr;

	check_repeat(argv);
	idx_argv = 1;
	while (argv[idx_argv])
	{
		nbr = ft_atol(argv[idx_argv]);
		check_errors(argv[idx_argv], nbr);
		idx_argv++;
	}
	if (idx_argv == 1)
		exit(EXIT_SUCCESS);
}

void	check_argc(int argc)
{
	if (argc < 2)
		exit(EXIT_FAILURE);
}
