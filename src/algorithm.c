/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 03:46:16 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:27:25 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) <= 3)
		return (sort_for_three(a), ft_lstclear(a), exit(0));
	action_pb(a, b);
	if (ft_lstsize(*a) > 3)
		action_pb(a, b);
	while (ft_lstsize(*a) > 3)
		most_logical_move(a, b);
	sort_for_b(b);
	sort_for_three(a);
	while (ft_lstsize(*b) > 0)
		push_to_last_position(a, b);
	while ((*a)->data != find_min_value(a))
		action_rra(a, 0);
	if (check_sorted(*a))
		return (ft_lstclear(a), exit(0));
}

int	check_sorted(t_stack *a)
{
	while (a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_for_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	if (ft_lstsize(*a) == 2)
		return (action_sa(*a, 0), exit(0));
	first = (*a)->data;
	second = (*a)->next->data;
	third = (*a)->next->next->data;
	if (first > second && second < third && first < third)
		action_sa(*a, 0);
	else if (first > second && second > third)
	{
		action_sa(*a, 0);
		action_rra(a, 0);
	}
	else if (first > second && second < third && first > third)
		action_ra(a, 0);
	else if (first < second && second > third && first < third)
	{
		action_sa(*a, 0);
		action_ra(a, 0);
	}
	else if (first < second && second > third && first > third)
		action_rra(a, 0);
}

void	push_one(t_stack **a, t_stack **b, int index, char flag)
{
	while (index != 0)
	{
		if (index < 0 && flag == 'a')
		{
			action_rra(a, 0);
			index++;
		}
		else if (index > 0 && flag == 'a')
		{
			action_ra(a, 0);
			index--;
		}
		else if (index < 0 && flag == 'b')
		{
			action_rrb(b, 0);
			index++;
		}
		else if (index > 0 && flag == 'b')
		{
			action_rb(b, 0);
			index--;
		}	
	}
}
