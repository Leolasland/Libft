/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:56:37 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/07 12:59:05 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t	i;
	size_t	len;
	char	*mapped;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	if ((mapped = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapped[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}
