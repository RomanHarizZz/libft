/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:05:27 by hstolten          #+#    #+#             */
/*   Updated: 2018/10/05 22:51:45 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_btree_search_item(t_btree *root, void *data_ref, \
							int (*cmpf)(void *, void *))
{
	if (!root || !data_ref)
		return (0);
	else if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	else if (root->left)
		return (ft_btree_search_item(root->left, data_ref, cmpf));
	else if (root->right)
		return (ft_btree_search_item(root->right, data_ref, cmpf));
	return (0);
}
