/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:57:45 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 08:47:00 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	pos;
	size_t	i;

	pos = 0;
	i = 1;
	if (! *little)
		return ((char*)big);
	while (big[pos] != '\0' && (size_t)pos < len)
	{
		if (big[pos] == little[0])
		{
			while (little[i] != '\0' && (size_t)(pos + i) < len
					&& big[pos + i] == little[i])
				i++;
			if (little[i] == '\0')
				return ((char *)big + pos);
		}
		pos++;
	}
	return (NULL);
}
