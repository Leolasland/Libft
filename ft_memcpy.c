/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:52:20 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/07 15:48:10 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *to, const void *from, size_t count)
{
	int i;

	i = 0;
	while (count != 0)
	{
		to[i] = from[i];
		i++;
		count--;
	}
}