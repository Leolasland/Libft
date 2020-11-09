/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:58:08 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/09 14:27:10 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (NULL);
	if (start + len > s_len)
		len = s_len - start;
	if ((sub = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	sub[len] = '\0';
	if (start > ft_strlen(s))
		return (sub);
	return (ft_strncpy(sub, s + start, len));
}
