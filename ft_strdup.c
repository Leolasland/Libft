char *ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	dest = malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	while (j < i + 1)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}