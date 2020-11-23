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
  	size_t dstlen;
	size_t srclen;
	size_t len;

	dstlen = ft_strlen(dst);
	srclen = 0;
	if (dstlen < n)
		len = dstlen;
	else
		len = n;
	if (n != 0)
		--n;
	while (src[srclen] != '\0' && dstlen < n)
	{
		dst[dstlen] = src[srclen];
		srclen++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (len + ft_strlen(src));
}
