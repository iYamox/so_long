/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_winable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:49:27 by amary             #+#    #+#             */
/*   Updated: 2026/01/08 18:37:17 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

char	**cpy_grid(t_map map)
{
	char	**cpy;
	int		j;

	j = 0;
	cpy = malloc(map.height * sizeof(char *));
	if (!cpy)
		return (NULL);
	while (j < map.height)
	{
		cpy[j] = ft_strdup(map.grid[j]);
		if (!cpy[j])
			return (free_grid(cpy, map.height), NULL);
		j++;
	}
	return (cpy);
}

void	ft_find_player(char **grid, int heigth, int *px, int *py)
{
	int	x;
	int	y;

	y = 0;
	while (y < heigth)
	{
		x = 0;
		while (grid[y][x])
		{
			if (grid[y][x] == 'P')
			{
				*py = y;
				*px = x;
				return ;
			}
			x++;
		}
		y++;
	}
}

int	check_winable(char **grid, int heigth)
{
	int	y;
	int	x;
	int	exit_found;

	y = 0;
	exit_found = 0;
	while (y <= heigth - 1)
	{
		x = 0;
		while (grid[y][x])
		{
			if (grid[y][x] == 'C')
				return (0);
			if (grid[y][x] == 'E')
				exit_found = 1;
			x++;
		}
		y++;
	}
	return (exit_found);
}

void	free_grid(char **grid, int heigth)
{
	int	j;

	j = 0;
	while (j < heigth)
		free(grid[j++]);
	free(grid);
}
int	is_winable(t_map map)
{
	char	**cpy;
	int		px;
	int		py;
	int		result;

	cpy = cpy_grid(map);
	if (!cpy)
		return (0);
	ft_find_player(cpy, map.height, &px, &py);
	flood_fill(cpy, px, py);
	result = check_winable(cpy, map.height);
	free_grid(cpy, map.height);
	return (result);
}
