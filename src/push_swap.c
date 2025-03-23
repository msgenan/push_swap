/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:00:09 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/24 01:16:18 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_list(t_stack *a, char c)
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
    
    action_rra(&a);
    print_list(a, 'a');
    print_list(b, 'b');
}
