/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 21:19:18 by hstolten          #+#    #+#             */
/*   Updated: 2018/09/27 19:43:40 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (0);
	a = malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (a);
	i = 0;
	while (min < max)
	{
		a[i++] = min;
		++min;
	}
	return (a);
}
