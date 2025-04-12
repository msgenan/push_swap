/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithmic_actions_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:23:44 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/12 22:18:25 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	push_to_last_position(t_stack **a, t_stack **b)
{
	t_stack *temp;
	int current_index_a;
	
	temp = *b;
	current_index_a = move_calculator_a(a, find_number_a(temp->data, a));
	temp = temp->next;
	push_to_a(a, b, current_index_a);
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

void    push_to_a(t_stack **a, t_stack **b, int index_a)
{
	if(index_a != 0)
		push_one(a, b, index_a, 'a');
	action_pa(a, b);
}

void final_rotation(t_stack **a)
{
    int min;
    int index;
    int size;
    
	min = find_min_value(a);
	index = move_calculator_a(a, min);
	size = ft_lstsize(*a);
    if (index <= size / 2)
    {
        while (index-- > 0)
            action_ra(a, 0);
    }
    else
    {
        int moves = size - index;
        while (moves-- > 0)
            action_rra(a, 0);
    }
}
