/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 23:17:35 by mlurker           #+#    #+#             */
/*   Updated: 2018/09/07 23:17:37 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		applyf(root->item);
		btree_apply_prefix(root->left, applyf);
		btree_apply_prefix(root->right, applyf);
	}
}
