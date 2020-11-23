/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:54:11 by hdanyel           #+#    #+#             */
/*   Updated: 2020/11/10 08:47:00 by hdanyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void reverse(char *str, int len)
 {
	 int i;
	char c;
 
	i = 0;
     while (len > i) 
     {
         c = str[i];
         str[i] = str[len - 1];
         str[len - 1] = c;
	 i++;
	     len--;
     }
	 
	 
char	*ft_itoa(int value)
{
     int i; 
	int sign;
	char str;

	sign = value;
     if (value < 0)  
         value = -value;         
     i = 0;
     while ((value /= 10) > 0)
		str[i++] = value % 10 + '0';
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     
     return(reverse(str, strlen(str));
 }
