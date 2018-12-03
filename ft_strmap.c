/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:16:03 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 12:00:47 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
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
        *(str2 + i) = f(*(s + i));
	i++;
    }
    return (str2);
}
