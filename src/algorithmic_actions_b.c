/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithmic_actions_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:11:28 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/12 22:14:36 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void most_logical_move(t_stack **a, t_stack **b)
{
    t_stack *temp = *a;
    int best_move;
	int current_move;
    int best_index_a;
    int best_index_b;
	int current_index_a;
	int current_index_b;
    
	best_index_a = 0;
	best_index_b = 0;
	best_move = 2147483647;
    while (temp)
    {
        current_index_a = move_calculator_a(a, temp->data);
        current_index_b = move_calculator_b(b, find_number_b(temp->data, b));
        current_move = total_move(current_index_a, current_index_b);
        if (current_move < best_move)
        {
            best_move = current_move;
            best_index_a = current_index_a;
            best_index_b = current_index_b;
        }
        temp = temp->next;
    }
    push_to_b(a, b, best_index_a, best_index_b);
}

void    push_to_b(t_stack **a, t_stack **b, int index_a, int index_b)
{
	if ((a < 0 && b < 0) || (a > 0 && b > 0))
		push_together(a, b, index_a, index_b);
	if(index_a != 0)
		push_one(a, b, index_a, 'a');
	if(index_b != 0)
		push_one(a, b, index_b, 'b');
	action_pb(a, b);
}

void	sort_for_b(t_stack **stack)
{
	t_stack *tmp;
	int index;
	
	tmp = *stack;
	index = move_calculator_b(stack, find_min_value(stack));
	while(index != 0)
	{
		if(index > 0)
		{
			action_rb(stack, 0);
			index--;
		}
		else
		{
			action_rrb(stack, 0);
			index++;
		}
	}
	action_rb(stack, 0);
}

int	total_move(int a, int b)
{
	if(a < 0)
		a *= -1;
	if(b < 0)
		b *= -1;
	return(a + b);
}