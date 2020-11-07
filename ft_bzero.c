/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:16:25 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/06 16:09:15 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_bzero(void *s , size_t  n)
{
	char *c;
	size_t i;

	if (s == NULL)
		return (NULL);
	*c = s;
	i = 0;
	while(i < n)
	{
		c[i] = '\0';
		i++;
	}
}