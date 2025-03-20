# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my_lib/my_lib.h"

typedef struct s_stack
{
    struct s_stack *next;
    int data;

}   t_stack;

#ifndef INT_MAX 
# define INT_MAX 2147483647
# endif

#ifndef INT_MIN
# define INT_MIN -2147483648
#endif

void    ft_error(char *str);
long    ft_atol(char *str);
int ft_strzero(const char *s);

#endif