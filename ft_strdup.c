/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 06:51:32 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 06:51:36 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	size_t size;

	size = ft_strlen(src);
	new = (char *)malloc(sizeof(*src) * size + 1);
	if (!new)
		return (NULL);
	ft_strcpy(new, src);
	return (new);
}
