/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:56:23 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/24 17:25:10 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t d_len;
	size_t s_len;
	size_t j;
	size_t i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen((char*)src);
	j = d_len;
	i = 0;
	if (d_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && d_len + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (d_len >= dstsize)
		d_len = dstsize;
	return (d_len + s_len);
}
