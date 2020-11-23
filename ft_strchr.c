/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:55:49 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 15:39:51 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (*ptr && !(*ptr == c))
		ptr++;
	if (*ptr == c)
		return (ptr);
	else
		return (NULL);
}
