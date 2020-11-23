/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:56:37 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 08:47:00 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  	size_t	i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	if ((str = ft_strdup(const char *)s) == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		str[i] = (*f)((unsigned int)i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
