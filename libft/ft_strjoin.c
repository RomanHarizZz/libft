/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:38:16 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/23 16:38:17 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *s3;
    size_t  i;
    size_t  j;
    size_t  s1_len;
    size_t  s2_len;

    i = -1;
    j = -1;
    if (!s1 || !s2)
        return (NULL);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    s3 = ft_strnew(s1_len + s2_len);
    if (!s3)
        return (NULL);
    while (++i < s1_len)
        *(s3 + i) = *(s1 + i);
    while (++j < s2_len)
    {
        *(s3 + i) = *(s2 + j);
        i++;
    }
    return (s3);
}
