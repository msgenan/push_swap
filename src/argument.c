/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 00:59:46 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:41:57 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

void	check_dup(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (ft_atol(s[i]) == ft_atol(s[j]))
				return (str_free(s), ft_error());
			j++;
		}
		i++;
	}
}

void	check_arg(char **s)
{
	int		i;
	int		j;
	long	num;

	i = 0;
	while (s[i])
	{
		j = 0;
		if ((s[i][j] == '-' || s[i][j] == '+') && s[i][j + 1] != '\0')
			j++;
		while (s[i][j])
		{
			if (s[i][j] < '0' || s[i][j] > '9')
				return (str_free(s), ft_error());
			j++;
		}
		num = ft_atol(s[i]);
		if (num < INT_MIN || num > INT_MAX)
			return (str_free(s), ft_error());
		if (num == 0 && !ft_strzero(s[i]))
			return (str_free(s), ft_error());
		i++;
	}
	check_dup(s);
}

int	check_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

char	**take_arg(char **av)
{
	int		i;
	char	*str;
	char	*temp;
	char	**s;

	i = 1;
	str = ft_strdup(av[i]);
	if (!av[i + 1])
		s = ft_split(str, ' ');
	else
	{
		while (av[i + 1])
		{
			temp = ft_strjoin(str, av[i + 1]);
			free(str);
			str = temp;
			i++;
		}
		s = ft_split(str, ' ');
	}
	free(str);
	check_arg(s);
	return (s);
}

void	take_list(t_stack **a, char **s)
{
	t_stack	*node;
	t_stack	*temp;
	int		i;

	i = 0;
	while (s[i])
	{
		node = ft_lstnew(ft_atol(s[i]));
		if (!node)
			ft_error();
		if (!*a)
			*a = node;
		else
		{
			temp = *a;
			while (temp->next)
				temp = temp->next;
			temp->next = node;
		}
		i++;
	}
	str_free(s);
}
