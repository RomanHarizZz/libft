/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 07:43:05 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 07:50:08 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	bate;

	bate = 0;
	while (bate < n)
	{
		((unsigned char *)s1)[bate] = ((unsigned char *)s2)[bate];
		if (((unsigned char *)s2)[bate] == (unsigned char)c)
			return ((void *)(((unsigned char *)s1) + 1 + bate));
		bate++;
	}
	return (NULL);
}
