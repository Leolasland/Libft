/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:56:09 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/07 12:56:09 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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