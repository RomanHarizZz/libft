/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 07:58:47 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 08:33:57 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*sr;
	char	*ds;

	i = 0;
	ds = (char *)dst;
	sr = (char *)src;
	if (sr < ds)
		while ((int)(--len) >= 0)
			*(ds + len) = *(sr + len);
	else
		while (i < len)
		{
			*(ds + i) = *(sr + i);
			i++;
		}
	return (dst);
}
