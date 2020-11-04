//
// Created by Herbie Danyel on 11/4/20.
//

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}