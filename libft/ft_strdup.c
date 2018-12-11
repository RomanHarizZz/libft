/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 06:51:32 by hstolten          #+#    #+#             */
/*   Updated: 2018/12/11 17:21:56 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	size_t	size;

	size = ft_strlen(src);
	new = (char *)malloc(sizeof(*src) * size + 1);
	if (!new)
		return (NULL);
	ft_strcpy(new, src);
	return (new);
}
