#include "push_swap.h"

void    check_argument(char **av)
{
    int i;
	int j;
	char **s;

    i = 1;
	while(av[i])
	{
		s = ft_split(av[i], ' ');
		j = 0;
		while(av[i][j])
		{
			if(!(av[i][j] >= '0' && av[i][j] <= '9'))
				ft_error("Non-numeric characters found in arguments!");
			j++;
		}
	    if((ft_atol(av[i]) != 0 || ft_strzero(av[i]) == 1))
		{
			printf("%d\n", ft_atol(av[i]));
			i++;
		}
		else
			ft_error("Arguments are incorrect!");
	}

}

int main(int ac, char **av)
{
    if(ac <= 1)
	{
		printf("input sayısı hatalı!");
		return(0);
	}
	check_argument(av);
}