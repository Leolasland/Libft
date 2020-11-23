/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:56:23 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 08:47:00 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char *odst;
	const char *osrc;
	size_t n;
	
	*odst = dst;
	*osrc = src;
	n = size;
	while (n-- != 0 && *dst != '\0')
		dst++;
	n = dsize - dst - odst;
	if (n-- == 0)
		return(dst - odst + strlen(src));
	while (*src != '\0') 
	{
		if (n != 0) 
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return(dst - odst + (src - osrc));
}
