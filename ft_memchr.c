/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:54:28 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 14:04:42 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr;
	unsigned char sym;
	size_t		i;

	i = 0;
	ptr = (unsigned char *)s;
	sym = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == sym)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
