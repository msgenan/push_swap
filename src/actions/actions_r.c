/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:35:02 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:47:38 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	action_ra(t_stack **a, int flag)
{
	t_stack	*new;
	t_stack	*tmp;

	if (!a || !*a)
		return ;
	new = ft_lstnew((*a)->data);
	tmp = *a;
	*a = tmp->next;
	ft_lstdelone(tmp);
	ft_lstadd_back(a, new);
	if (!flag)
		actions_message("ra");
}

void	action_rb(t_stack **b, int flag)
{
	t_stack	*new;
	t_stack	*tmp;

	if (!b || !*b)
		return ;
	new = ft_lstnew((*b)->data);
	tmp = *b;
	*b = tmp->next;
	ft_lstdelone(tmp);
	ft_lstadd_back(b, new);
	if (!flag)
		actions_message("rb");
}

void	action_rr(t_stack **a, t_stack **b)
{
	action_ra(a, 1);
	action_rb(b, 1);
	actions_message("rr");
}
