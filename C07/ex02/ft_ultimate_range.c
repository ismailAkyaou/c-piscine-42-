/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <iakyaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/00/20 00:20:58 by iakyaou           #+#    #+#             */
/*   Updated: 2023/00/20 01:29:05 by iakyaou          ###   ########.fr       */
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

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		index;
	int		*buffer;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	d = (buffer = malloc(bound * sizeof(int)));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}
