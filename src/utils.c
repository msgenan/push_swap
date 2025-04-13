/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:00:19 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:56:14 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

void	str_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

int	ft_strzero(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '0')
			return (1);
		i++;
	}
	return (0);
}

long	ft_atol(char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (10 * result) + (str[i++] - '0');
		if (result < -2147483648 || result > 2147483647)
			return (2147483648);
	}
	return (result * sign);
}

void	actions_message(char *string)
{
	if (!ft_strncmp(string, "pa", 2))
		write(1, "pa\n", 3);
	else if (!ft_strncmp(string, "pb", 2))
		write(1, "pb\n", 3);
	else if (!ft_strncmp(string, "rrr", 3))
		write(1, "rrr\n", 4);
	else if (!ft_strncmp(string, "rra", 3))
		write(1, "rra\n", 4);
	else if (!ft_strncmp(string, "rrb", 3))
		write(1, "rrb\n", 4);
	else if (!ft_strncmp(string, "ra", 2))
		write(1, "ra\n", 3);
	else if (!ft_strncmp(string, "rb", 2))
		write(1, "rb\n", 3);
	else if (!ft_strncmp(string, "rr", 2))
		write(1, "rr\n", 3);
	else if (!ft_strncmp(string, "sa", 2))
		write(1, "sa\n", 3);
	else if (!ft_strncmp(string, "sb", 2))
		write(1, "sb\n", 3);
}
