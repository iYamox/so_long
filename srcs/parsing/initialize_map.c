/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:30:33 by amary             #+#    #+#             */
/*   Updated: 2026/01/06 22:40:01 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	initialize_map(char *str, t_map *map)
{
	int		fd;
	char	*line;
	int		j;

	j = 0;
	fd = open(str, O_RDONLY);
	if (fd < 0)
		return (close (fd), exit(0));
	line = get_next_line(fd);
	while (line)
	{
		j++;
		free(line);
		line = get_next_line(fd);
	}
	map->grid = malloc ((j + 1) * sizeof(char *));
	if (!map->grid)
	{
		write(2, "Error, allocation map grid failed", 34);
		exit (0);
	}
	close(fd);
	return ;
}
