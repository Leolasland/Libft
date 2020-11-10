/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:56:16 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 08:47:00 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsjoin(char **strs, char *delim)
{
	int		i;
	size_t	join_len;
	size_t	delim_len;
	char	*join;

	delim_len = ft_strlen(delim);
	join_len = 0;
	i = -1;
	while (strs[++i] != NULL)
	{
		join_len += ft_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			join_len += delim_len;
	}
	if ((join = (char*)malloc(sizeof(char) * (join_len + 1))) == NULL)
		return (NULL);
	join[0] = '\0';
	i = -1;
	while (strs[++i] != NULL)
	{
		ft_strcat(join, strs[i]);
		if (*strs[i] != '\0' && strs[i + 1] != NULL)
			ft_strcat(join, delim);
	}
	return (join);
}
