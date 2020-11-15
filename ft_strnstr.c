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
  char	*h;
	size_t	little_len;
	size_t	j;
	size_t	i;

	h = (char *)big;
	if (!(little_len = ft_strlen(little)))
		return (h);
	if (ft_strlen(big) < little_len || len < little_len)
		return (NULL);
	i = 0;
	while (h[i] && i <= len - little_len)
	{
		j = 0;
		while (little[j] && little[j] == h[i + j])
			j++;
		if (j == little_len)
			return (&h[i]);
		i++;
	}
	return (NULL);
}
