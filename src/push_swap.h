/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:14:51 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/12 22:39:51 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my_lib/my_lib.h"

#ifndef INT_MAX
# define INT_MAX 2147483647
# endif

#ifndef INT_MIN
# define INT_MIN -2147483648
#endif


void	print_list(t_stack *a, char c);


long    ft_atol(char *str);
char    **take_arg(char **av);
int     check_sorted(t_stack *a);
int     ft_strzero(const char *s);
void    ft_error(char *str);
void    check_dup(char **s);
void    check_arg(char **s);
void    str_free(char **str);
void	sort_for_three(t_stack **a);
void	actions_message(char *string);
void    take_list(t_stack **a, char **s);


int     total_move(int a, int b);
int	    find_min_value(t_stack **stack);
int     find_max_value(t_stack **stack);
int     find_number_a(int data, t_stack **a);
int     find_number_b(int data, t_stack **b);
int     move_calculator_b(t_stack **b, int num);
int     move_calculator_a(t_stack **a, int data);
void	sort_for_b(t_stack **stack);
void	algorithm(t_stack **a, t_stack **b);
void	most_logical_move(t_stack **a, t_stack **b);
void	push_to_last_position(t_stack **a, t_stack **b);
void    push_to_a(t_stack **a, t_stack **b, int index_a);
void	push_one(t_stack **a, t_stack **b, int index, char flag);
void    push_to_b(t_stack **a, t_stack **b, int index_a, int index_b);
void	push_together(t_stack **a, t_stack **b, int index_a, int index_b);


void    action_sb(t_stack *b, int flag);
void    action_sa(t_stack *a, int flag);
void    action_ss(t_stack *a, t_stack *b);

void	action_pa(t_stack **a, t_stack **b);
void	action_pb(t_stack **a, t_stack **b);

void    action_ra(t_stack **a, int flag);
void    action_rb(t_stack **b, int flag);
void    action_rr(t_stack **a, t_stack **b);

void    action_rra(t_stack **a, int flag);
void	action_rrb(t_stack **b, int flag);
void    action_rrr(t_stack **a, t_stack **b);

#endif