/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <iakyaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/00/20 00:20:58 by iakyaou           #+#    #+#             */
/*   Updated: 2023/00/20 01:30:50 by iakyaou          ###   ########.fr       */
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

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	index;
	int	i;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index + 1] && (*cmp)(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
		i++;
	}
}
