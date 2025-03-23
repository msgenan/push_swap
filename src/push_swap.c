/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxc <fxc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:00:09 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/22 23:42:01 by fxc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_list(t_stack *a)
{
    while (a)
    {
        if(!a->next)
            printf("[%d]-> NULL", a->data);
        else
            printf("[%d]-> ", a->data);
        a = a->next;
    }
    printf("\n");
}

void    take_list(t_stack **a, char **s)
{
    t_stack *node;
    t_stack *temp;
    int i;

    i = 0;
    while(s[i])
    {
        node = new_node(ft_atol(s[i]));
        if(!node)
            ft_error("something wrong there man!");
        if(!*a)
            *a = node;
        else
        {
            temp = *a;
            while(temp->next)
                temp = temp->next;
            temp->next = node;
        }
        i++;
    }
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
    action_pb(a, b);
    print_list(a);
    print_list(b);
}
