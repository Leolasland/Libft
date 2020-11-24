/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:55:43 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/24 16:57:37 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sum(const char *str, char c)
{
	int	word;

	word = 0;
	if (*str != c && *str)
	{
		str++;
		word++;
	}
	while (*str != '\0')
	{
		while (*str == c)
		{
			str++;
			if (*str != c && *str)
				word++;
		}
		str++;
	}
	return (word);
}

static int	ft_sep(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str != c && *str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

static void	ft_free(char **arr)
{
	int i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	j = 0;
	if (!s || (!(arr = (char **)ft_calloc((ft_sum(s, c) + 1), sizeof(char *)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			continue;
		if (!(arr[j] = (char*)malloc(sizeof(char) * (ft_sep(s, c) + 1))))
		{
			ft_free(arr);
			return (NULL);
		}
		i = 0;
		while (*s != c && *s)
			arr[j][i++] = *s++;
		arr[j][i] = '\0';
		j++;
	}
	return (arr);
}
