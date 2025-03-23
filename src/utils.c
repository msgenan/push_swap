/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:00:19 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/23 23:02:51 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_error(char *str)
{
    printf("%s\n", str);
    exit(0);
}

void    str_free(char **str)
{
    int i;

    i = 0;
    while(str[i])
        free(str[i++]);
    free(str);
}

int ft_strzero(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '0')
			return(1);
		i++;
	}
	return(0);
}

long    ft_atol(char *str)
{
    int i;
    int sign;
    long result;

    i = 0;
    sign = 1;
    result = 0;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
        result = (10 * result) + (str[i++] - 48);
    return(result * sign);
}
