/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:16:03 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/11 17:34:07 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str2;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str2 = ft_strnew(ft_strlen(s));
	if (!str2)
		return (NULL);
	while (*(s + i))
	{
		*(str2 + i) = f(*(s + i));
		i++;
	}
	return (str2);
}
