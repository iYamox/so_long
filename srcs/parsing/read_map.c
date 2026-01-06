/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:47:46 by amary             #+#    #+#             */
/*   Updated: 2026/01/06 22:40:13 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_map	read_map(char *str)
{
	int		j;
	int		fd;
	char	*line;
	t_map	map;

	j = 0;
	initialize_map(str, &map);
	fd = open(str, O_RDONLY);
	if (fd < 0)
		exit(0);
	line = get_next_line(fd);
	while (line)
	{
		map.grid[j++] = ft_strdup(line);
		free(line);
		line = get_next_line(fd);
	}
	map.grid[j] = NULL;
	map.height = j + 1;
	map.width = 0;
	close(fd);
	return (map);
}
