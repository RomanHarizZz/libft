/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 07:43:05 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/11 17:09:45 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	by;

	by = 0;
	while (by < n)
	{
		((unsigned char *)s1)[by] = ((unsigned char *)s2)[by];
		if (((unsigned char *)s2)[by] == (unsigned char)c)
			return ((void *)(((unsigned char *)s1) + 1 + by));
		by++;
	}
	return (NULL);
}
