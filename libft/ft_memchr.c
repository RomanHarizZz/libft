/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 08:35:39 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/11 17:19:51 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	o;
	int				i;

	i = 0;
	o = (unsigned char)c;
	arr = (unsigned char *)s;
	while (n--)
	{
		if (arr[i] == o)
			return (arr + i);
		i++;
	}
	return (NULL);
}
