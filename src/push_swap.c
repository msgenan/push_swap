/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:00:09 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/11 01:33:40 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *a, char c)
{
	if(c == 'a')
	{
		printf("stack a = ");
		while (a)
		{
			if(!a->next)
				printf("[%d]-> NULL", a->data);
			else
				printf("[%d]-> ", a->data);
			a = a->next;
		}
	}
	else
	{
		printf("stack b = ");
		while (a)
		{
			if(!a->next)
				printf("[%d]-> NULL", a->data);
			else
				printf("[%d]-> ", a->data);
			a = a->next;
		}
	}
	printf("\n");
}

int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	char **str;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		ft_error("hatali input!");
	str = take_arg(av);
	take_list(&a, str);
	a->size = ft_lstsize(a);
	if(check_sorted(a) == 1)
		return(ft_lstclear(&a), 0);
	algorithm(&a, &b);
	
}
