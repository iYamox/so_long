/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:08:35 by amary             #+#    #+#             */
/*   Updated: 2026/01/10 21:58:24 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	flood_fill(char **grid, int x, int y)
{
	if (x < 0 || y < 0)
		return ;
	if (grid[y][x] == '1' || grid[y][x] == 'V')
		return ;
	if (grid[y][x] != 'E')
		grid[y][x] = 'V';
	flood_fill(grid, x + 1, y);
	flood_fill(grid, x - 1, y);
	flood_fill(grid, x, y + 1);
	flood_fill(grid, x, y - 1);
	return ;
}
