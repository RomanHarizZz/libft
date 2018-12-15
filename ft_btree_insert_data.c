/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstolten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:47:35 by hstolten          #+#    #+#             */
/*   Updated: 2018/10/05 21:04:29 by hstolten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*mtree;

	if (!item || !*root || !root)
	{
		if (item && root)
			*root = ft_btree_create_node(item);
		return ;
	}
	mtree = *root;
	if (cmpf(item, mtree->item) < 0)
	{
		if (mtree->left)
			ft_btree_insert_data(&mtree->left, item, cmpf);
		else if (!(mtree->left))
			mtree->left = ft_btree_create_node(item);
	}
	else
	{
		if (mtree->right)
			ft_btree_insert_data(&mtree->right, item, cmpf);
		else if (!(mtree->right))
			mtree->right = ft_btree_create_node(item);
	}
}
