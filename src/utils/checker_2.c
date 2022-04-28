/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <oalaoui-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:23:55 by oalaoui-          #+#    #+#             */
/*   Updated: 2022/04/02 21:10:22 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	check_numbers(t_data *data)
{
	int	i;

	i = -1;
	while (data->s_split[++i])
	{
		if (valid_str(data->s_split[i]) == 0)
			put_error("Error\n", data);
		data->i_split[i] = ft_atoi(data->s_split[i]);
		if (-2147483648 > data->i_split[i] || 2147483647 < data->i_split[i])
			put_error("Error\n", data);
	}
}
