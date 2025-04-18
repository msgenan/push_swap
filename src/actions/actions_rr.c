/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:41:15 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:49:45 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	action_rra(t_stack **a, int flag)
{
	t_stack	*new;
	t_stack	*tmp;
	t_stack	*prev;

	if (!a || !*a || !(*a)->next)
		return ;
	tmp = ft_lstlast(*a);
	new = ft_lstnew(tmp->data);
	ft_lstadd_front(a, new);
	prev = *a;
	while (prev->next != tmp)
		prev = prev->next;
	prev->next = NULL;
	ft_lstdelone(tmp);
	if (!flag)
		actions_message("rra");
}

void	action_rrb(t_stack **b, int flag)
{
	t_stack	*new;
	t_stack	*tmp;
	t_stack	*prev;

	if (!b || !*b || !(*b)->next)
		return ;
	tmp = ft_lstlast(*b);
	new = ft_lstnew(tmp->data);
	ft_lstadd_front(b, new);
	prev = *b;
	while (prev->next != tmp)
		prev = prev->next;
	prev->next = NULL;
	ft_lstdelone(tmp);
	if (!flag)
		actions_message("rrb");
}

void	action_rrr(t_stack **a, t_stack **b)
{
	action_rra(a, 1);
	action_rrb(b, 1);
	actions_message("rrr");
}
