/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:57:45 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/07 12:59:05 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr (const char *big, const char *little, size_t len)
{
  size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char*)haystack);
	while (*haystack && len-- >= needle_len)
	{
		if (ft_strnequ(haystack, needle, needle_len))
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
