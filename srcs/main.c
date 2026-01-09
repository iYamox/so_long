/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:28:37 by amary             #+#    #+#             */
/*   Updated: 2026/01/09 18:53:23 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	free_map(t_map map)
{
	int	j;

	j = 0;
	while (map.grid[j])
		free(map.grid[j++]);
	return ;
}

int	main(int argc, char **argv)
{
	t_map	map;

	if (argc != 2)
		return (write(2, "Error to many arguments\n", 25), 1);
	map = read_map(argv[1]);
	if (!ft_parsing(map))
		return (write(2, "Parsing error\n", 15), 1);
	if (!start_game(map))
		return (write(2, "Game crashed\n", 14), 1);
	free_map(map);
	return (0);
}
