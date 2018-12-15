/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 05:19:57 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/12 21:42:03 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	if (*to_find == '\0')
		return ((char*)str);
	i = 0;
	while (*str && len)
	{
		if (*str == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return ((char*)(str - i + 1));
		str++;
		len--;
	}
	return (NULL);
}
