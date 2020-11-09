/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:54:28 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/07 14:53:25 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *buffer, int ch, size_t count)
{
	unsigned char *ptr;
	unsigned char sym;

	ptr = (unsigned char *)s;
	sym = (unsigned char)c;
	while (n--)
	{
		if (*ptr == sym)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
