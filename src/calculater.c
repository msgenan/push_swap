/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculater.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:12:14 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:56:35 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

int	move_calculator_a(t_stack **a, int data)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *a;
	while (temp)
	{
		if (temp->data == data)
			break ;
		i++;
		temp = temp->next;
	}
	if (ft_lstsize(*a) / 2 > i)
		return (i);
	else
		return ((ft_lstsize(*a) - i) * -1);
}

int	move_calculator_b(t_stack **b, int num)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *b;
	while (temp)
	{
		if (temp->data == num)
			break ;
		i++;
		temp = temp->next;
	}
	if (ft_lstsize(*b) / 2 > i)
		return (i);
	else
		return ((ft_lstsize(*b) - i) * -1);
}

int	find_number_b(int data, t_stack **b)
{
	t_stack	*temp;
	int		value;
	int		max;
	int		min;

	value = -2147483648;
	max = find_max_value(b);
	min = find_min_value(b);
	if (data < min)
		return (max);
	temp = *b;
	while (temp)
	{
		if (data > temp->data && temp->data > value)
			value = temp->data;
		temp = temp->next;
	}
	return (value);
}

int	find_min_value(t_stack **stack)
{
	t_stack	*temp;
	int		value;

	value = 2147483647;
	temp = *stack;
	while (temp)
	{
		if (temp->data < value)
			value = temp->data;
		temp = temp->next;
	}
	return (value);
}

int	find_max_value(t_stack **stack)
{
	t_stack	*temp;
	int		value;

	value = -2147483648;
	temp = *stack;
	while (temp)
	{
		if (temp->data > value)
			value = temp->data;
		temp = temp->next;
	}
	return(value);
}
