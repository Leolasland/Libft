/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:56:09 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 14:13:32 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		j;
	int		i;

	j = 0;
	i = ft_strlen(src) + 1;
	dest = malloc(i);
	if (dest == NULL)
		return (NULL);
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
