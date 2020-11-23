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
	int	word;
​
	word = 0;
	if (*str !=c && *str)
	{
		str++;
		word++;
	}
 	while (*str != '\0')
	{
		while (*str == c)
		{
			str++;
			if (*str !=c && *str)
				word++;
		}
		str++;
	}
	return (word);
}
​
static	int	ft_separation (const char *str, char c)
{
	int	count;
​
	count = 0;
	while (*str != c && *str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
​
static	void	ft_free(char **arr)
{
	int i;
	
	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}
​
char		**ft_split(char const *s, char c)
{
	char	**arr;
	int	i;
	int	j;
​
	i = 0;
	j = 0;
	if (!s || (!(arr = (char **)malloc(sizeof(char *) * (ft_sum(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s !=c && *s)
		{
			if (!(arr[j] = (char*)malloc(sizeof(char) * (ft_separation(s, c) + 1))))
				return (ft_free(arr));
			while (*s != c && *s)
				arr[j][i++] = *s++;
			arr[j][i] '\0';
			j++;
			i = 0;
		}
		
	}
	arr[j] = NULL;
	return (arr);
}
