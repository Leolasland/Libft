/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:57:53 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/07 12:59:05 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
  size_t i;

	i = ft_strlen(s) + 1;
	while (s[--i] != (char)c)
		if (i == 0)
			return (NULL);
	return ((char*)s + i);
}
