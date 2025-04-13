/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 04:20:36 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:23:16 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

void	print_number(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		print_number(-n);
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

void	ft_print_list(t_stack *a, char c)
{
	if (c == 'a')
		write(1, "stack a = ", 10);
	else
		write(1, "stack b = ", 10);
	while (a)
	{
		write(1, "[", 1);
		print_number(a->data);
		write(1, "]", 1);
		if (a->next)
			write(1, "-> ", 3);
		else
			write(1, "-> NULL\n", 8);
		a = a->next;
	}
}