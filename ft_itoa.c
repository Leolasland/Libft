/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:54:11 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/25 11:44:08 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_numlen(int n, int sign)
{
	int numlen;

	numlen = 1;
	while (n /= 10)
		numlen++;
	return (numlen + sign);
}

static int		ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static void		ft_reverse(char *str, int len)
{
	int		i;
	char	c;

	i = 0;
	while ((len / 2) > i)
	{
		c = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = c;
		i++;
	}
}

char			*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;

	sign = 0;
	i = 0;
	if (n < 0)
		sign = 1;
	if (!(str = ft_calloc(ft_numlen(n, sign) + 1, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[i] = '0';
	while (n != 0)
	{
		str[i++] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		str[i++] = '-';
	ft_reverse(str, ft_strlen(str));
	return (str);
}
