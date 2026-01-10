/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:05:35 by amary             #+#    #+#             */
/*   Updated: 2026/01/10 22:18:00 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	start_game(t_game *game)
{
	game->mlx = mlx_init();
	game->window = mlx_new_window(game->mlx, game->map.width * 96,
			game->map.height * 96, "So_long");
	load_texture(game, 1);
	mlx_key_hook(game->window, handle_key, game);
	mlx_loop(game->mlx);
	return ;
}
