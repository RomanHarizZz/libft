/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:18:25 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:21 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char *ft_strnew(size_t size)
{
	char *s;

	s = (char *)malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	ft_bzero(s, size + 1);
	return (s);
}
