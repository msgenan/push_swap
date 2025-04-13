/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithmic_actions_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:23:44 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:28:19 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_last_position(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		index_a;

	temp = *b;
	index_a = move_calculator_a(a, find_number_a(temp->data, a));
	temp = temp->next;
	push_to_a(a, b, index_a);
}

int	find_number_a(int data, t_stack **a)
{
	int		value;
	int		min;
	int		max;
	t_stack	*temp;

	value = 2147483647;
	max = find_max_value(a);
	min = find_min_value(a);
	if (data > max)
		return (min);
	temp = *a;
	while (temp)
	{
		if (temp->data > data && temp->data < value)
			value = temp->data;
		temp = temp->next;
	}
	return (value);
}

void	push_to_a(t_stack **a, t_stack **b, int index_a)
{
	if (index_a != 0)
		push_one(a, b, index_a, 'a');
	action_pa(a, b);
}
