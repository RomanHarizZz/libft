/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 05:19:57 by hstolten          #+#    #+#             */
/*   Updated: 2018/11/20 05:27:15 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int pos;
	unsigned int i;

	if (!to_find)
		return (str);
	pos = 0;
	while (pos != len)
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i])
				++i;
			if (to_find[i] == '\0')
				return (&str[pos]);
		}
		++pos;
	}
	return (0);
}
