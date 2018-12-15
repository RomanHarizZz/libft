/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 07:43:05 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/12 17:53:15 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			by;
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	if (dst2 == src2)
		return (dst2);
	by = 0;
	while (by < n)
	{
		dst2[by] = src2[by];
		if (src2[by] == (unsigned char)c)
			return (dst2 + 1 + by);
		by++;
	}
	return (NULL);
}
