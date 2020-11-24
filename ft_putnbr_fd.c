/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:55:29 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/24 16:06:51 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int number;

	if (n < 0)
		ft_putchar_fd('-', fd);
	number = ft_abs(n);
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd(((number % 10) + '0'), fd);
	}
	else
		ft_putchar_fd(number + '0', fd);
}
