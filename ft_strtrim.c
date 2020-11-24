/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:58:00 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/24 18:31:23 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_char(s1[start], set))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_char(s1[end - 1], set))
		end--;
	if (!(new = malloc(sizeof(*s1) * (end - start + 1))))
		return (NULL);
	i = 0;
	while (end > start)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}
