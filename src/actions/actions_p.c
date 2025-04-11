/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:31:19 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/11 01:05:12 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	action_pa(t_stack **a, t_stack **b) // (push a) b[first] -> a[first]
{
	t_stack	*new;
	t_stack *temp;

	if(!b || !*b)
		return ;
	new = ft_lstnew((*b)->data);
	temp = *b;
	*b = temp->next;
	ft_lstdelone(temp);
	ft_lstadd_front(a, new);
	actions_message("pa");
	if(check_sorted(*a) == 1 && (*a)->size == ft_lstsize(*a))
		return(ft_lstclear(a), exit(0));
}

void	action_pb(t_stack **a, t_stack **b) // (push b) a[first] -> b[first]
{
	t_stack	*new;
	t_stack *temp;

	if(!a || !*a)
		return ;
	new = ft_lstnew((*a)->data);
	temp = *a;
	*a = temp->next;
	ft_lstdelone(temp);
	ft_lstadd_front(b, new);
	actions_message("pb");
}
