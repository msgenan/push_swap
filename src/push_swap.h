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

void    ft_error(char *str);
void    str_free(char **str);
long    ft_atol(char *str);
void    check_dup(char **s);
void    check_arg(char **s);
char    **take_arg(char **av);
int     check_sorted(t_stack *a);
int     ft_strzero(const char *s);
void	sort_for_three(t_stack *a);
void    take_list(t_stack **a, char **s);
void	actions_message(char *string);


void    action_sb(t_stack *b);
void    action_sa(t_stack *a);
void    action_ss(t_stack *a, t_stack *b);

void	action_pa(t_stack **a, t_stack **b);
void	action_pb(t_stack **a, t_stack **b);

void    action_ra(t_stack **a);
void    action_rb(t_stack **b);
void    action_rr(t_stack **a, t_stack **b);

void    action_rra(t_stack **a);
void    action_rrb(t_stack **b);
void    action_rrr(t_stack **a, t_stack **b);

#endif