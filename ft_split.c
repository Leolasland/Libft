/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:55:43 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 08:47:00 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	 ft_sum(const char *str, char c)
{
	int	q;
​
	q = 0;
 	while (*str != '\0')
	{
		while (*str == c)
		{
			str++;
			if (*str == '\0')
				return(q);
		}
		if (*str != c)
			q++;
 		while (*str != c)
		{
			str++;
			if (*str == '\0')
				return (q);
		}
	}
	return (q);
}
​
static	int	ft_separation (const char *s, char c)
{
	int	len;
​
	len = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
​
static	void	ft_free(char **arr, int k)
{
	while (k--)
		free(arr[k]);
	free(arr);
}
​
char		**ft_split(char const *s, char c)
{
	char	**arr;
	int	j;
	int	k;
	int	i;
	int	sum;
​
	i = 0;
	sum = ft_sum(s, c);
	if (!s || !((arr = (char **)malloc((sum + 1) * sizeof(char *)))))
		return (NULL);
	k = -1;
	while (k++ != sum)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!(arr[k] = (char*)malloc(sizeof(char) * (ft_separation(&s[i], c) + 1))))
		{
			ft_free(arr, k);
			return (NULL);
		}
		arr[k][ft_separation(&s[i], c)] = '\0';
		j = 0;
		while (s[i] != c && s[i] != '\0')
			arr[k][j++] = s[i++];
	}
	arr[k+1] = NULL;
	return (arr);
}
