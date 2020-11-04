//
// Created by Herbie Danyel on 11/4/20.
//

int	ft_atoi(char *str)
{
	int n;
	int i;
	int m;
	int sign;

	n = 0;
	i = 0;
	m = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		m = str[i] - '0';
		n = (n * 10) + m;
		i++;
	}
	return (n * sign);
}