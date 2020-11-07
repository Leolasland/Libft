/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:57:15 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/07 12:57:15 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp (char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s2 == '\0' && n)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}