/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 07:02:08 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 07:33:28 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;	
	while(i < n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return dst;
}

