/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 06:54:06 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 06:54:08 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strstr(const char *str,const char *to_find)
{
	size_t pos;
	size_t i;
	//char *str2;

	//str2 = str;
	if (!ft_strlen(to_find))
		return ((char *)str);
	if (!to_find && !str)
		return ((char *)str);

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i])
				++i;
			if (to_find[i] == '\0')
				return ((char *)&str[pos]);
		}
		++pos;
	}
	return (0);
}
