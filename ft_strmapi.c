/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:29:42 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/23 14:29:43 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str2;
    int     i;

    if (!s)
        return (NULL);
    str2 = ft_strnew(ft_strlen(s));
    if (!str2)
        return (NULL);
    i = 0;
    while (*(s + i))
    {
        *(str2 + i) = f(i , *(s + i));
	i++;
    }
    return (str2);
}
