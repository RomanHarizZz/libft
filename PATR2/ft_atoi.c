/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 01:13:36 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 06:49:13 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while (*str == '\n' || *str == ' ' || *str == '\t' || *str == '\r' ||\
	*str == '\v' || *str == '\f')\
	{
		++str;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 0;
		str++;
	}
	while ((*str) >= '0' && (*str) <= '9')
	{
		value *= 10;
		value = (sign ? value + (*str - '0') : value - (*str - '0'));
		str++;
	}
	return (value);
}
