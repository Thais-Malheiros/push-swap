/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:43:10 by tmalheir          #+#    #+#             */
/*   Updated: 2024/04/16 15:19:06 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*The atol() function converts the initial portion of the string pointed to
by str to long and return the converted value.*/

long	ft_atol(const char *str)
{
	int		idx;
	int		sign;
	long	result;

	idx = 0;
	sign = 1;
	while (str[idx] == ' ' || str[idx] == '\f' || str[idx] == '\n'
		|| str[idx] == '\r' || str[idx] == '\t' || str[idx] == '\v')
		idx++;
	if (str[idx] == '-')
		sign = -1;
	if (str[idx] == '-' || str[idx] == '+')
		idx++;
	result = 0;
	while (str[idx])
	{
		if (str[idx] >= '0' && str[idx] <= '9')
			result = result * 10 + (str[idx] - '0');
		else
			break ;
		idx++;
	}
	return (sign * result);
}
