/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <oalaoui-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:51:46 by oalaoui-          #+#    #+#             */
/*   Updated: 2022/04/02 16:58:25 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_list **lst)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (ft_lstsize(*lst) <= 1)
		return ;
	tmp1 = *lst;
	tmp2 = tmp1->next;
	if (tmp2->next)
		tmp2->next->prev = tmp1;
	tmp1->next = tmp2->next;
	tmp1->prev = tmp2;
	tmp2->next = tmp1;
	tmp2->prev = NULL;
	*lst = tmp2;
}

void	sa(t_list **lst)
{
	swap(lst);
	ft_putstr("sa\n");
}

void	sb(t_list **lst)
{
	swap(lst);
	ft_putstr("sb\n");
}

void	ss_(t_list **lst1, t_list **lst2)
{
	swap(lst1);
	swap(lst2);
}

void	ss(t_list **lst1, t_list **lst2)
{
	ss_(lst1, lst2);
	ft_putstr("ss\n");
}
