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

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if(dst < src)
		while ((int)n >= 0)
		{
			((char*)dst)[n] = ((char*)src)[n];
			n--;
		}
	else
		while(i < n)
		{
			((char*)dst)[i] = ((char*)src)[i];
			i++;
		}
    return dst;
}
