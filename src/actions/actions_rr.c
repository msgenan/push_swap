/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:41:15 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/24 01:22:38 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	action_rra(t_stack **a) // a[last] -> a[first]
{
    t_stack *new;
	t_stack *tmp;
	t_stack *prev;
	
	if(!a || !*a || !(*a)->next)
		return ;
	tmp = ft_lstlast(*a);
	new = ft_lstnew(tmp->data);
	ft_lstadd_front(a, new);
	prev = *a;
    while (prev->next != tmp)
        prev = prev->next;
    prev->next = NULL;
	ft_lstdelone(tmp);
}

void	action_rrb(t_stack **b) // b[last] -> b[first]
{
    t_stack *new;
	t_stack *tmp;
	t_stack *prev;
	
	if(!b || !*b || !(*b)->next)
		return ;
	tmp = ft_lstlast(*b);
	new = ft_lstnew(tmp->data);
	ft_lstadd_front(b, new);
	prev = *b;
    while (prev->next != tmp)
        prev = prev->next;
    prev->next = NULL;
	ft_lstdelone(tmp);
}

void	action_rrr(t_stack **a, t_stack **b) // (rra) (rrb)
{
    action_rra(a);
    action_rrb(b);
}