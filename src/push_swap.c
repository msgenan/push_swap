#include "push_swap.h"

void    check_arg(char **s)
{
    int i;
	int j;

    i = 0;
	while(s[i])
	{
		j = 0;
		while(s[i][j])
		{
			if(!(s[i][j] >= '0' && s[i][j] <= '9') && (s[i][j] >= '-' && s[i][j] <= '+'))
				ft_error("Karakterler sayilardan oluşmadi!");
			j++;
		}
		if(!(ft_atol(s[i]) >= INT_MIN && ft_atol(s[i]) <= INT_MAX))
			ft_error("int siniri aşildi");
	    if((ft_atol(s[i]) != 0 || ft_strzero(s[i]) == 1))
		{
			printf("%s\n", s[i]);
			i++;
		}
		else
			ft_error("Error");
	}
}
void	check_dup(char **av, char **s, int flag)
{
	int i;
	int j;

	i = 0;
	if(flag == 1)
	{
		while(av[++i])
		{
			j = i + 1;
			while(av[j])
				if(av[i] == av[j++])
					ft_error("dup!");
		}
	}
	else
	{
		while(s[i])
		{
			j = i + 1;
			while(s[j])
				if(s[i] == s[j++])
					ft_error("dup1!");
			i++;
		}
	}	
}

void	take_arg(char **av)
{
	int i;
	int j;
	int flag;
	char **s;

	i = 1;
	flag = 0;
	while(av[i])
	{
		j = 0;
		s = ft_split(av[i], ' ');
		if(!s[1])
			flag = 1;
		check_dup(av, s, flag);
		check_arg(s);
		while(s[j])
			free(s[j++]);
		free(s);
		i++;
	}
}

int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		ft_error("hatali input!");
	take_arg(av);
}