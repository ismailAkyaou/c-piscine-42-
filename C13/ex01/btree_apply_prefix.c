/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <iakyaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/00/20 00:20:58 by iakyaou           #+#    #+#             */
/*   Updated: 2023/00/20 01:31:42 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*  █████████            ██████████         ██████████         ██████████     */
/*  ██     ██                    ██                 ██         ██      ██     */
/*         ██                    ██                 ██         ██      ██     */
/*         ██                    ██                 ██                 ██     */
/*         ██            ██████████         ██████████                 ██     */
/*         ██                    ██                 ██                 ██     */
/*         ██                    ██                 ██                 ██     */
/*         ██                    ██                 ██                 ██     */
/*      ████████         ██████████         ██████████                 ██     */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

/* void	display(void *item)
{
	printf("%s ", (char *)item);
}
*/
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}

/* int	main()
{
	t_btree	level3ll = {NULL, NULL, "3"};
	t_btree	level3lr = {NULL, NULL, "4"};
	t_btree	level3rl = {NULL, NULL, "6"};
	t_btree	level3rr = {NULL, NULL, "7"};
	t_btree level2l = {&level3ll, &level3lr, "2"};
	t_btree	level2r = {&level3rl, &level3rr, "5"};
	t_btree	level1 = {&level2l, &level2r, "1"};

	btree_apply_prefix(&level1, display);
	return (0);
} */
