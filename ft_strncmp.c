/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:57:15 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 14:27:20 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = ft_memcmp(s1, s2, n);
	if( i < len)
		return (n);
	else
		return (len + 1);

}
