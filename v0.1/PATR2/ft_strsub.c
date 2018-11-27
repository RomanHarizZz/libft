/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:50:48 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/23 16:18:08 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *s2;
    size_t  i;

    if (!s)
        return (NULL);
    s2 = ft_strnew(len);
    if (!s2)
        return (NULL);
    i = 0;
    while (i < len)
    {
        *(s2 + i) = *(s + start);
        i++;
        start++;
    }
    return (s2);
}
