/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 01:13:36 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/15 18:34:45 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	result;
	long long int	temp;
	int				value;

	result = 0;
	temp = 0;
	value = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' \
			|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		value = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		temp = result;
		result = result * 10 + *str - '0';
		if (result < temp)
			return (value == -1 ? 0 : -1);
		str++;
	}
	return (result * value);
}
