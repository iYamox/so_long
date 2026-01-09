/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:05:35 by amary             #+#    #+#             */
/*   Updated: 2026/01/09 18:24:43 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	start_game(t_map map)
{
	t_game	game;

	game.mlx = mlx_init();
	game.window = mlx_new_window(game.mlx, 1980, 1080, "Point faible ? Trop fort");
	game.map = map;
	if (!load_texture(&game))
		return (write(2, "error_texture\n", 15), 0);
	mlx_loop(game.mlx);

	(void)map;
	return (1);
}