/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 05:42:38 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 06:40:37 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	 *ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen((char *)str);
	while (0 != len && str[len] != (char)c)
		len--;
	if (str[len] == (char)c)
		return ((char *)&str[len]);
	return (NULL);
}
