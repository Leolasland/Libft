/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:56:16 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/25 11:10:21 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	if (!(dst = malloc(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dst[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		dst[j++] = s2[i++];
	}
	dst[j] = '\0';
	return (dst);
}
