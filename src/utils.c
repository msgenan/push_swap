#include "push_swap.h"

void    ft_error(char *str)
{
    printf("%s\n", str); //ft_printf kullan!!
    exit(0);
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
