/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:55:49 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/07 12:59:05 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int ch)
{
  char	*ptr;
	char	sym;

	ptr = (char *)s;
	sym = (char)c;
	while (*ptr && !(*ptr == sym))
		ptr++;
	return ((*ptr == sym) ? ptr : NULL);
}
