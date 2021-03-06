/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:07:31 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/11 21:16:59 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	n2;

	str_len = int_len(n);
	n2 = n;
	if (n < 0)
	{
		n2 = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = n2 % 10 + '0';
	while (n2 /= 10)
		str[--str_len] = n2 % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
