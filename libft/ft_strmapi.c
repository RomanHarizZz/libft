/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:29:42 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/11 17:35:33 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		*(str2 + i) = f(i, *(s + i));
		i++;
	}
	return (str2);
}
