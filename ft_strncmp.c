int	ft_strncmp (char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s2 == '\0' && n)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}